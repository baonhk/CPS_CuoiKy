# Hệ Thống CPS Cho Điều Khiển Động Cơ DC (Digital Twin + Off-Board Diagnostics)

> Đồ án môn học **Hệ Thống CPS** — Khoa Điện Điện Tử, Trường Đại học Công nghệ Kỹ thuật TP. Hồ Chí Minh (HCMUTE), 06/2026.

**Nhóm thực hiện:**
| Họ tên | MSSV |
|---|---|
| Huỳnh Thanh Phương | 22139052 |
| Huỳnh Trọng Khiêm | 22139033 |
| Thái Hữu Lợi | 23139027 |
| Bùi Anh Duy | 23139007 |
| Nguyễn Bình Khánh Bảo | 23139003 |

## 1. Giới thiệu

Động cơ DC là thiết bị truyền động phổ biến trong hệ thống nhúng, robot và tự động hóa công nghiệp. Các phương pháp giám sát truyền thống (On-Board Diagnostics) đặt toàn bộ logic chẩn đoán lên vi điều khiển, gặp hạn chế về tài nguyên tính toán, khó cập nhật thuật toán và không thể giám sát tập trung nhiều thiết bị.

Đồ án này xây dựng một hệ thống **Cyber-Physical System (CPS)** ứng dụng kỹ thuật **Digital Twin** kết hợp nền tảng **AWS Cloud** để chẩn đoán lỗi động cơ DC từ xa (**Off-Board Diagnostics**) — cụ thể là phát hiện lỗi suy giảm/mất nguồn cấp động cơ (lệnh PWM vẫn được gửi bình thường nhưng tốc độ thực tế thấp hơn đáng kể so với dự đoán của mô hình).

### Mục tiêu
- Điều khiển tốc độ động cơ DC bằng bộ điều khiển **Feedforward + PID** trên Arduino Mega.
- Xây dựng mô hình **Digital Twin** của động cơ DC bằng Simscape (MATLAB) và định danh tham số hệ thống bằng **Parameter Estimation**.
- Kết nối IoT giữa ESP32 và **AWS IoT Core** qua giao thức **MQTT/TLS**.
- Triển khai mô hình Digital Twin lên **AWS Lambda** dưới dạng file thực thi Linux (sinh mã bằng Simulink Coder).
- Thuật toán chẩn đoán lỗi dựa trên chỉ số **RMSE** giữa tốc độ thực và tốc độ dự đoán, hiển thị qua **web dashboard** thời gian thực.

## 2. Kiến trúc hệ thống

Hệ thống được tổ chức theo kiến trúc Digital Twin 3 lớp:

| Lớp | Thành phần | Vai trò |
|---|---|---|
| **Vật lý** | Arduino Mega, MOSFET IRF3205, động cơ DC 12V + encoder quang (1856 CPR) | Điều khiển động cơ, đo tốc độ thực bằng encoder |
| **Kết nối** | Level Shifter 5V↔3.3V, ESP32, MQTT/TLS, AWS IoT Core (Thing Shadow) | Truyền dữ liệu tốc độ/PWM lên cloud một cách bảo mật, độ trễ thấp |
| **Kỹ thuật số** | AWS Lambda (chạy file thực thi sinh từ Simulink Coder), thuật toán so sánh RMSE, Web Dashboard | Mô phỏng song song với thiết bị thật, phát hiện phân kỳ bất thường → cảnh báo |

**Phần cứng:** Arduino Mega điều khiển động cơ DC qua PWM 8-bit + MOSFET IRF3205 (diode IN4007 bảo vệ xung áp ngược), đọc tốc độ qua encoder quang (bộ lọc thông thấp `H(s) = 1/(0.15s + 1)` để làm mượt nhiễu lượng tử hóa). Dữ liệu được chuyển tiếp qua Level Shifter sang ESP32 để publish lên AWS IoT Core.

**Mô hình toán học động cơ DC:** kết hợp phương trình mạch armature (điện áp – dòng điện – back-EMF) và phương trình động học cơ (mô-men – quán tính – tải), được định danh bằng thực nghiệm quét PWM vòng hở và Simulink Parameter Estimation.

## 3. Cấu trúc thư mục

```
CPS_CuoiKy/
├── CPS_CuoiKy.prj                 # MATLAB Project — mở để tự động nạp path
├── docs/
│   ├── Baocao_2.docx               # Báo cáo đầy đủ (cơ sở lý thuyết, thiết kế, kết quả)
│   └── baibao.html                 # Bài báo mô tả đề tài
├── simulink/
│   ├── Chapter_9_Section_3_1.slx           # Thí nghiệm quét PWM vòng hở (system ID)
│   ├── Chapter_9_Section_3_1.slx.original
│   ├── Chapter_9_Section_3_1_System_ID_Data.mat   # Dữ liệu PWM & tốc độ đo được
│   ├── Chapter_9_Section_3_1.hex/.elf/.eep        # Firmware build từ model trên (Arduino Mega)
│   ├── Chapter_9_Section_3_3.slx           # Fit tham số động cơ (Parameter Estimation)
│   ├── Chapter_9_Section_5.slx             # Mô hình Digital Twin hoàn chỉnh
│   ├── Chapter_9_Section_5_Script.m        # Script xử lý dữ liệu định danh hệ thống
│   ├── generated_code/                     # Mã C (GRT) do Simulink Coder sinh từ mô hình Section 5
│   │                                        #   → dùng để build file thực thi Linux triển khai lên AWS Lambda
│   └── sfunctions/
│       ├── sfcn_encoder.c                  # S-Function Level-2: driver đọc encoder
│       ├── sfcn_encoder_wrapper.c           # Wrapper: ISR đọc xung A/B, debounce, tính vị trí/tốc độ
│       ├── sfcn_encoder.tlc
│       ├── sfcn_encoder.mexw64             # Binary đã compile sẵn (Windows/MATLAB)
│       └── rtwmakecfg.m
└── esp32_aws_iot/
    ├── esp32_aws_iot.ino               # Firmware ESP32: kết nối Wi-Fi + MQTT/TLS tới AWS IoT Core
    ├── filetest.ino
    └── certs_template/
        └── generate_certificates.py    # Script sinh certificates.h từ cert/key AWS IoT Core
```

## 4. ⚠️ Bảo mật chứng chỉ AWS IoT

Bộ mã nguồn gốc có chứa **private key và certificate thật** cấp cho thiết bị trên AWS IoT Core
(`*.pem.key`, `*.pem.crt`, và `certificates.h` nhúng sẵn key trong code). Các file này
**đã được loại khỏi repository** (`.gitignore`) vì đây là repo public — lộ private key nghĩa là
bất kỳ ai cũng có thể giả mạo thiết bị kết nối vào AWS IoT Core của bạn.

Trước khi chạy lại `esp32_aws_iot.ino`, cần tạo bộ chứng chỉ mới:
1. Trong AWS IoT Console, **thu hồi (revoke/deactivate)** certificate cũ nếu nó từng bị public — coi như đã lộ.
2. Tạo Thing mới (hoặc dùng Thing hiện có) → **Create certificate** → tải về `xxxx-certificate.pem.crt`, `xxxx-private.pem.key`. Root CA (`AmazonRootCA1.pem`) đã có sẵn trong `certs_template/`.
3. Chạy `python3 certs_template/generate_certificates.py`, trỏ tới cert/key thật của bạn, để sinh `certificates.h`.
4. Đặt `certificates.h` cùng thư mục với `esp32_aws_iot.ino` trước khi biên dịch (Arduino IDE/PlatformIO).

## 5. Môi trường & công cụ

- **MATLAB/Simulink** (mô hình tạo bởi Simulink 26.1) + **Simscape**, **Simulink Coder**, **Parameter Estimation Toolbox**.
- **Arduino IDE** hoặc **PlatformIO** — board **Arduino Mega** (điều khiển động cơ) và **ESP32** (kết nối cloud).
- **AWS**: IoT Core (MQTT broker + Thing Shadow), Lambda (chạy Digital Twin), tài khoản AWS để tự cấp certificate.
- **Python 3** cho `generate_certificates.py`.

## 6. Cách mở project

```matlab
prj = openProject('CPS_CuoiKy.prj');
```
MATLAB sẽ tự động thêm các thư mục con (`simulink/`, `simulink/sfunctions/`, ...) vào path.

## 7. Tài liệu tham khảo trong đồ án

Chi tiết cơ sở lý thuyết (Digital Twin, MQTT/TLS, Thing Shadow, mô hình toán động cơ DC, thuật toán chẩn đoán RMSE), kết quả thực nghiệm và hình ảnh dashboard — xem đầy đủ trong `docs/Baocao_2.docx` và `docs/baibao.html`.

## Giấy phép

Chưa xác định — thêm file `LICENSE` nếu muốn công khai license cụ thể (MIT, GPL, ...).
