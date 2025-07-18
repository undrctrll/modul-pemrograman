# Modul 5: File Handling (C++)

## Materi
- Membaca & menulis file teks di C++ (fstream)
- Operasi file sederhana

## Praktikum
1. Buat program menyimpan data mahasiswa ke file.
   ```cpp
   #include <fstream>
   // ... struct Mahasiswa ...
   ofstream file("data.txt");
   file << mhs.nim << " " << mhs.nama << " " << mhs.nilai << endl;
   file.close();
   ```
2. Buat program membaca & menampilkan isi file data mahasiswa. 