# Modul 3: Fungsi dan Prosedur (C++)

## Materi
- Fungsi di C++ (dengan parameter & return)
- Prosedur (fungsi void)
- Rekursi

## Praktikum
1. Buat fungsi untuk menghitung faktorial.
   ```cpp
   int faktorial(int n) {
       if(n <= 1) return 1;
       else return n * faktorial(n-1);
   }
   ```
2. Buat prosedur (void) menampilkan deret Fibonacci. 