# WiFi Robot Pengumpan Sampah (ESP32)

Repository ini berisi **program dasar ESP32** yang digunakan untuk mengendalikan **Robot Pengumpan Sampah berbasis WiFi**.

Program ini terhubung dengan **aplikasi Android berbasis Kodular** sebagai remote control, yang memungkinkan pengguna mengontrol gerakan robot dan aktuator melalui jaringan WiFi lokal.

---

## 📌 Fitur Utama
- Kontrol gerak robot melalui WiFi
- Komunikasi menggunakan ESP8266 (Access Point)
- Mendukung perintah gerak (maju, mundur, kiri, kanan, dan diagonal)
- Dapat dikembangkan untuk kontrol aktuator (servo, relay, gripper, lift, dll)

---

## 📂 Isi Repository
- **Tes_Relay.ino**  
  Program dasar ESP32 untuk menerima perintah dari aplikasi Android dan mengendalikan output sesuai perintah yang diterima.

---

## 🔧 Perangkat yang Digunakan
- ESP32
- Driver motor BTS7960
- Motor DC (Gearbox)
- Servo
- Sumber daya baterai
- Smartphone Android

---

## 📱 Aplikasi Android
Aplikasi Android dibuat menggunakan **Kodular**, yang berfungsi sebagai:
- Remote control robot
- Media dokumentasi (diagram rangkaian, program dasar, dan tutorial penggunaan)

---

## 🚀 Cara Penggunaan Singkat
1. Upload program `Tes_Relay.ino` ke ESP32.
2. Nyalakan robot dan tunggu hingga WiFi ESP8266 aktif.
3. Hubungkan smartphone ke WiFi robot.
4. Buka aplikasi Android.
5. Gunakan tombol kontrol untuk menggerakkan robot.

---

## 📖 Catatan
Repository ini dibuat sebagai bagian dari **projek akademik / pembelajaran** dan dapat dikembangkan lebih lanjut sesuai kebutuhan.

---

## 👤 Author
- Nama: *iqball*
- Program Studi: *Tekik Elektro*
