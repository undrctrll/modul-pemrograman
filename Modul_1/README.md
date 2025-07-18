# Modul 1: Pengenalan Pemrograman Lanjutan (C++)

## Materi
- Review dasar C++ (variabel, tipe data, operator, input/output)
- Struktur kontrol (if, else, switch)
- Praktikum: Membuat program kalkulator sederhana

## Praktikum
1. Buat program C++ untuk menghitung luas dan keliling lingkaran.
   ```cpp
   #include <iostream>
   using namespace std;
   int main() {
       float r, luas, keliling;
       cout << "Jari-jari: "; cin >> r;
       luas = 3.14 * r * r;
       keliling = 2 * 3.14 * r;
       cout << "Luas: " << luas << endl;
       cout << "Keliling: " << keliling << endl;
   }
   ```
2. Buat program konversi suhu (Celsius ke Fahrenheit dan sebaliknya). 