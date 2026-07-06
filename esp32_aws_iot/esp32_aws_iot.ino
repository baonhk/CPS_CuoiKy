#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "certificates.h"  

// ── Thông tin WiFi 
const char* WIFI_SSID     = "TEN_WIFI";
const char* WIFI_PASSWORD = "MAT_KHAU_WIFI";

// ── Thông tin AWS IoT 
//endpoint
const char* AWS_ENDPOINT  = "xxxxxx-ats.iot.ap-southeast-1.amazonaws.com";
const int   AWS_PORT      = 8883;         // MQTT over TLS

// Tên thing
const char* CLIENT_ID     = "digital_twin_thing";

// Topic gửi data lên Thing Shadow
const char* TOPIC_PUBLISH = "$aws/things/digital_twin_thing/shadow/update";

// ── Cấu hình Serial với Arduino Mega
// Arduino Mega TX1 (pin 18) →  ESP32 RX2 (pin 16)
#define SERIAL_BAUD  115200

// ── Biến lưu trữ dữ liệu
#define SAMPLE_COUNT  30          

float pwm_buffer[SAMPLE_COUNT];   
float spd_buffer[SAMPLE_COUNT];   
float prev_pwm  = 0.0;           
float prev_spd  = 0.0;           
int   sample_idx = 0;           
bool  expect_pwm = true;        

// ── Kết nối
WiFiClientSecure net;
PubSubClient     mqtt(net);

// ── Hàm kết nối WiFi
void connectWiFi() {
  Serial.print("[WiFi] Đang kết nối tới: ");
  Serial.println(WIFI_SSID);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  int retry = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    retry++;
    if (retry > 40) {
      Serial.println("\n[WiFi] Thất bại! Kiểm tra lại SSID và password.");
      return;
    }
  }

  Serial.println();
  Serial.print("[WiFi] Đã kết nối! IP: ");
  Serial.println(WiFi.localIP());
}

// ── Hàm kết nối AWS IoT 
void connectAWS() {
  // Nạp certificate vào WiFiClientSecure
  net.setCACert(AWS_ROOT_CA);
  net.setCertificate(AWS_DEVICE_CERT);
  net.setPrivateKey(AWS_PRIVATE_KEY);

  mqtt.setServer(AWS_ENDPOINT, AWS_PORT);
  mqtt.setBufferSize(2048);    

  Serial.print("[AWS] Đang kết nối tới: ");
  Serial.println(AWS_ENDPOINT);

  int retry = 0;
  while (!mqtt.connected()) {
    if (mqtt.connect(CLIENT_ID)) {
      Serial.println("[AWS] Kết nối thành công!");
    } else {
      Serial.print("[AWS] Lỗi kết nối, mã lỗi: ");
      Serial.print(mqtt.state());
      Serial.println(" — thử lại sau 3 giây...");
      delay(3000);
      retry++;
      if (retry > 10) {
        Serial.println("[AWS] Không thể kết nối. Kiểm tra certificate và endpoint.");
        break;
      }
    }
  }
}

// ── đóng gói JSON và gửi lên AWS
void publishData() {

  StaticJsonDocument<2048> doc;
  JsonObject state   = doc.createNestedObject("state");
  JsonObject desired = state.createNestedObject("desired");

  JsonArray inputArr  = desired.createNestedArray("Input");
  JsonArray outputArr = desired.createNestedArray("Output");

  inputArr.add(prev_pwm);
  outputArr.add(prev_spd);

  for (int i = 0; i < SAMPLE_COUNT; i++) {
    inputArr.add(pwm_buffer[i]);
    outputArr.add(spd_buffer[i]);
  }

  char payload[2048];
  serializeJson(doc, payload);

  Serial.println("[MQTT] Đang gửi JSON...");
  Serial.println(payload); 

  if (mqtt.publish(TOPIC_PUBLISH, payload)) {
    Serial.println("[MQTT] Gửi thành công!");
  } else {
    Serial.println("[MQTT] Gửi thất bại! Kiểm tra kết nối.");
  }

  prev_pwm = pwm_buffer[SAMPLE_COUNT - 1];
  prev_spd = spd_buffer[SAMPLE_COUNT - 1];
}

// ── setup() 
void setup() {
  Serial.begin(SERIAL_BAUD);    
  Serial2.begin(SERIAL_BAUD);  

  Serial.println("  ESP32 Digital Twin");

  connectWiFi();
  connectAWS();
}

// ── loop()
void loop() {
  // Giữ kết nối MQTT
  if (!mqtt.connected()) {
    Serial.println("[MQTT] Mất kết nối, đang kết nối lại...");
    connectAWS();
  }
  mqtt.loop();

  // Đọc dữ liệu từ Arduino Mega
  if (Serial2.available()) {
    String line = Serial2.readStringUntil('\n');
    line.trim(); 

    if (line.length() == 0) return;   

    float value = line.toFloat();

    if (expect_pwm) {
      pwm_buffer[sample_idx] = value;
      expect_pwm = false;

    } else {
      spd_buffer[sample_idx] = value;
      expect_pwm = true;
      sample_idx++;

      Serial.print("[DATA] Mẫu ");
      Serial.print(sample_idx);
      Serial.print("/30 — PWM: ");
      Serial.print(pwm_buffer[sample_idx - 1]);
      Serial.print(" | Speed: ");
      Serial.println(value);

      if (sample_idx >= SAMPLE_COUNT) {
        publishData();
        sample_idx = 0; 
      }
    }
  }
}
