# Modul 2: Array dan String (C++)

## Materi
- Array satu & dua dimensi di C++
- Operasi dasar array
- Manipulasi string (menggunakan array char atau std::string)

## Praktikum
1. Buat program mencari nilai maksimum dan minimum dari array.
   ```cpp
   int arr[5] = {4, 2, 7, 1, 9};
   int max = arr[0], min = arr[0];
   for(int i=1; i<5; i++) {
       if(arr[i] > max) max = arr[i];
       if(arr[i] < min) min = arr[i];
   }
   cout << "Max: " << max << ", Min: " << min << endl;
   ```
2. Buat program membalik urutan string yang diinput user. 