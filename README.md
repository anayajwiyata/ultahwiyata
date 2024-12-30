Penjelasan Kode:
Inklusi Pustaka: #include <LiquidCrystal.h> digunakan untuk menyertakan pustaka LCD.
Inisialisasi LCD: LiquidCrystal lcd(rs, en, d4, d5, d6, d7); inisialisasi LCD dengan pin yang terhubung ke Arduino.
Setup:
lcd.begin(16, 2); mengatur LCD dengan 16 kolom dan 2 baris.
lcd.setCursor(0, 0); dan lcd.setCursor(0, 1); mengatur posisi kursor.
lcd.print("Selamat"); dan lcd.print("Ulang Tahun"); menampilkan pesan pada LCD.
Loop: Fungsi loop tidak digunakan dalam contoh ini karena kita hanya perlu menampilkan pesan sekali.
