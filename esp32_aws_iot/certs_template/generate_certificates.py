#!/usr/bin/env python3
# ============================================================
#  generate_certificates.py
#  Tự động đọc 3 file .pem và ghi thẳng vào certificates.h
#
#  CÁCH DÙNG:
#  1. Bỏ file này vào cùng thư mục với 3 file certificate
#  2. Mở Terminal / Command Prompt tại thư mục đó
#  3. Chạy lệnh: python generate_certificates.py
#  4. File certificates.h sẽ được tạo tự động
#
#  CẤU TRÚC THƯ MỤC:
#  esp32_aws_iot/
#    ├── esp32_aws_iot.ino
#    ├── generate_certificates.py   ← file này
#    ├── AmazonRootCA1.pem
#    ├── xxxxxxxx-certificate.pem.crt
#    └── xxxxxxxx-private.pem.key
# ============================================================

import os
import glob

# ── Tự động tìm file trong thư mục hiện tại ────────────────

def find_file(pattern):
    """Tìm file theo pattern, trả về đường dẫn đầu tiên tìm được"""
    matches = glob.glob(pattern)
    if matches:
        return matches[0]
    return None

def read_pem(filepath):
    """Đọc file .pem và chuyển thành format C string"""
    if not filepath or not os.path.exists(filepath):
        return None, None
    
    lines = []
    with open(filepath, "r") as f:
        for line in f:
            line = line.rstrip()
            if line:  # bỏ dòng trống
                lines.append(f'    "{line}\\n"')
    
    return "\n".join(lines), os.path.basename(filepath)

# ── Tìm 3 file certificate ──────────────────────────────────

print("=" * 55)
print("  Auto Certificate Generator cho ESP32 AWS IoT")
print("=" * 55)

# Tìm Root CA
root_ca_path = find_file("AmazonRootCA1.pem") or find_file("*RootCA*.pem")

# Tìm Device Certificate
cert_path = find_file("*certificate.pem.crt") or find_file("*-cert.pem")

# Tìm Private Key
key_path = find_file("*private.pem.key") or find_file("*-private.pem")

# Hiển thị kết quả tìm thấy
print(f"\n[1] Root CA      : {root_ca_path or '❌ KHÔNG TÌM THẤY'}")
print(f"[2] Device Cert  : {cert_path    or '❌ KHÔNG TÌM THẤY'}")
print(f"[3] Private Key  : {key_path     or '❌ KHÔNG TÌM THẤY'}")

# Nếu không tìm thấy tự động, hỏi user nhập tay đường dẫn
if not root_ca_path:
    root_ca_path = input("\nNhập đường dẫn file AmazonRootCA1.pem: ").strip()
if not cert_path:
    cert_path = input("Nhập đường dẫn file *-certificate.pem.crt: ").strip()
if not key_path:
    key_path = input("Nhập đường dẫn file *-private.pem.key: ").strip()

# ── Đọc và chuyển format ────────────────────────────────────

root_ca_str,  root_ca_name  = read_pem(root_ca_path)
cert_str,     cert_name     = read_pem(cert_path)
key_str,      key_name      = read_pem(key_path)

# Kiểm tra đọc được không
errors = []
if not root_ca_str: errors.append("Root CA")
if not cert_str:    errors.append("Device Certificate")
if not key_str:     errors.append("Private Key")

if errors:
    print(f"\n❌ Không đọc được file: {', '.join(errors)}")
    print("Kiểm tra lại tên file và thử lại.")
    input("\nBấm Enter để thoát...")
    exit(1)

# ── Ghi ra certificates.h ───────────────────────────────────

output = f"""// ============================================================
//  certificates.h — Tự động tạo bởi generate_certificates.py
//  Nguồn:
//    Root CA  : {root_ca_name}
//    Cert     : {cert_name}
//    Key      : {key_name}
//
//  KHÔNG CẦN SỬA FILE NÀY THỦ CÔNG
//  Nếu cần đổi certificate, chạy lại generate_certificates.py
// ============================================================

#ifndef CERTIFICATES_H
#define CERTIFICATES_H

// ── Amazon Root CA ──────────────────────────────────────────
const char* AWS_ROOT_CA =
{root_ca_str};

// ── Device Certificate ──────────────────────────────────────
const char* AWS_DEVICE_CERT =
{cert_str};

// ── Private Key ─────────────────────────────────────────────
const char* AWS_PRIVATE_KEY =
{key_str};

#endif
"""

output_path = "certificates.h"
with open(output_path, "w") as f:
    f.write(output)

print(f"\n✅ Tạo thành công: {os.path.abspath(output_path)}")
print("\nBây giờ mở Arduino IDE và upload code lên ESP32 là xong!")
input("\nBấm Enter để thoát...")
