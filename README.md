# CPS_CuoiKy — Hệ Thống CPS Cho Điều Khiển Động Cơ DC

Đồ án cuối kỳ về hệ thống Cyber-Physical System (CPS) điều khiển động cơ DC, kết hợp:
- **Simulink / Simscape** để mô hình hóa và nhận dạng hệ thống (system identification) động cơ DC.
- **S-Function tùy chỉnh** (`sfcn_encoder`) đọc xung encoder qua ngắt phần cứng (Arduino-style ISR).
- **Simulink Coder** sinh mã C và build firmware nạp cho vi điều khiển.
- **ESP32 + AWS IoT Core** để đưa dữ liệu digital twin lên cloud (MQTT/TLS).
- Báo cáo & bài báo mô tả đề tài (`docs/`).

## Cấu trúc thư mục

```
CPS_CuoiKy/
├── CPS_CuoiKy.prj              # MATLAB Project file (mở bằng MATLAB để load path tự động)
├── docs/
│   ├── Baocao_2.docx           # Báo cáo đồ án
│   └── baibao.html             # Bài báo/tài liệu mô tả đề tài
├── simulink/
│   ├── Chapter_9_Section_3_1.slx        # Mô hình nhận dạng hệ thống (open-loop PWM sweep)
│   ├── Chapter_9_Section_3_1.slx.original
│   ├── Chapter_9_Section_3_1_System_ID_Data.mat  # Dữ liệu thu thập được
│   ├── Chapter_9_Section_3_1.hex/.elf/.eep       # Firmware build ra từ model trên
│   ├── Chapter_9_Section_3_3.slx        # Mô hình bước tiếp theo (fit tham số)
│   ├── Chapter_9_Section_5.slx          # Mô hình digital twin đầy đủ
│   ├── Chapter_9_Section_5_Script.m     # Script xử lý/khảo sát dữ liệu nhận dạng
│   ├── generated_code/                  # Mã C do Simulink Coder (GRT) sinh ra từ Section 5
│   └── sfunctions/
│       ├── sfcn_encoder.c               # S-Function level-2 (encoder driver)
│       ├── sfcn_encoder_wrapper.c        # Wrapper: ISR đọc encoder A/B, chống dội (debounce)
│       ├── sfcn_encoder.tlc
│       ├── sfcn_encoder.mexw64          # Đã compile sẵn cho Windows/MATLAB
│       └── rtwmakecfg.m
└── esp32_aws_iot/
    ├── esp32_aws_iot.ino        # Firmware ESP32 kết nối AWS IoT Core qua MQTT/TLS
    ├── filetest.ino
    └── certs_template/
        └── generate_certificates.py   # Script hỗ trợ sinh certificates.h từ cert/key AWS IoT
```

## ⚠️ Về chứng chỉ AWS IoT (đã loại bỏ khỏi repo)

Bộ file gốc `esp32_aws_iot.zip` có chứa **private key và certificate thật** của AWS IoT
(`*.pem.key`, `*.pem.crt`, và `certificates.h` có key nhúng sẵn trong code). Các file này
**không được đưa lên repo** (đã liệt kê trong `.gitignore`) vì đây là public repository.

Để chạy lại `esp32_aws_iot.ino`, bạn cần tự tạo `certificates.h` bằng cách:
1. Tạo Thing mới trong AWS IoT Core (hoặc dùng Thing hiện có) và **cấp certificate mới**
   — vì bộ khóa cũ đã từng được chia sẻ ra ngoài nên nên coi như đã lộ, cần thu hồi
   (deactivate/revoke) certificate cũ trong AWS IoT Console.
2. Tải về `xxxx-certificate.pem.crt`, `xxxx-private.pem.key`, và Root CA (`AmazonRootCA1.pem`
   có sẵn trong `certs_template/`).
3. Chạy `python3 certs_template/generate_certificates.py` (đã có sẵn) trỏ tới các file cert/key
   thật của bạn để sinh ra `certificates.h`, rồi đặt file này cùng thư mục với `.ino` trước khi
   biên dịch bằng Arduino IDE / PlatformIO.

## Yêu cầu môi trường

- MATLAB/Simulink (R2026a trở lên — model được tạo bởi Simulink "26.1") + Simulink Coder,
  Simscape, Simulink Desktop Real-Time hoặc target hardware tương ứng.
- Arduino IDE hoặc PlatformIO (board ESP32) + thư viện AWS IoT / PubSubClient / WiFiClientSecure.
- Python 3 (cho `generate_certificates.py`).

## Cách mở project

Mở MATLAB, chạy:
```matlab
prj = openProject('CPS_CuoiKy.prj');
```
để tự động thêm các thư mục con vào path.

## Giấy phép

Chưa xác định — thêm file `LICENSE` nếu bạn muốn công khai license cụ thể (MIT, GPL, ...).
