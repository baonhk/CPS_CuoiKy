#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include "certificates.h"

const char* WIFI_SSID     = "TEN_WIFI";
const char* WIFI_PASSWORD = "MAT_KHAU";
const char* AWS_ENDPOINT  = "a3asp2vt9bwtan-ats.iot.ap-southeast-2.amazonaws.com";
const char* CLIENT_ID     = "DCMotor_ESP32";
const char* TOPIC         = "$aws/things/DCMotor_ESP32/shadow/update";

WiFiClientSecure net;
PubSubClient mqtt(net);

void setup() {
  Serial.begin(115200);

  // Kết nối WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) { delay(500); Serial.print("."); }
  Serial.println("\n✅ WiFi OK!");

  // Kết nối AWS
  net.setCACert(AWS_ROOT_CA);
  net.setCertificate(AWS_DEVICE_CERT);
  net.setPrivateKey(AWS_PRIVATE_KEY);
  mqtt.setServer(AWS_ENDPOINT, 8883);
  mqtt.setBufferSize(2048);

  int retry = 0;
  while (!mqtt.connected() && retry < 5) {
    Serial.print("Đang kết nối AWS...");
    if (mqtt.connect(CLIENT_ID)) {
      Serial.println("✅ AWS OK!");
    } else {
      Serial.print("❌ Lỗi: ");
      Serial.println(mqtt.state());
      delay(3000);
      retry++;
    }
  }

  if (!mqtt.connected()) {
    Serial.println("❌ Không kết nối được AWS. Dừng lại.");
    while(1);
  }

  // Gửi JSON giả lập
  StaticJsonDocument<2048> doc;
  JsonObject state   = doc.createNestedObject("state");
  JsonObject desired = state.createNestedObject("desired");
  JsonArray  input   = desired.createNestedArray("Input");
  JsonArray  output  = desired.createNestedArray("Output");

  input.add(100.0);
  output.add(1200.0);

  for (int i = 0; i < 30; i++) {
    input.add(100.0 + i * 0.5);   
    output.add(1200.0 + i * 3.0); 
  }

  char payload[2048];
  serializeJson(doc, payload);

  Serial.println("Đang gửi JSON test...");
  Serial.println(payload);

  if (mqtt.publish(TOPIC, payload)) {
    Serial.println("✅ GỬI THÀNH CÔNG");
  } else {
    Serial.println("❌ GỬI THẤT BẠI");
  }
}

void loop() { mqtt.loop(); }