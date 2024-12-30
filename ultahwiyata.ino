#include <LiquidCrystal.h>

// Inisialisasi perpustakaan dengan nomor pin interface
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Atur jumlah kolom dan baris untuk LCD
  lcd.begin(16, 2);
  
  // Tampilkan pesan "Selamat Ulang Tahun"
  lcd.setCursor(0, 0); // Pindah ke kolom 0, baris 0
  lcd.print("Selamat");
  lcd.setCursor(0, 1); // Pindah ke kolom 0, baris 1
  lcd.print("Ulang Tahun");
}

void loop() {
  // Tidak ada yang perlu dilakukan di loop
}