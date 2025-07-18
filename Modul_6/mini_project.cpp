#include <iostream>
#include <fstream>
using namespace std;

struct Barang {
    string kode;
    string nama;
    int jumlah;
    int harga;
};

void tambahBarang(Barang barang[], int &n) {
    cout << "Kode: "; cin >> barang[n].kode;
    cout << "Nama: "; cin >> barang[n].nama;
    cout << "Jumlah: "; cin >> barang[n].jumlah;
    cout << "Harga: "; cin >> barang[n].harga;
    n++;
}

void simpanKeFile(Barang barang[], int n) {
    ofstream file("barang.txt");
    for(int i=0; i<n; i++) {
        file << barang[i].kode << " " << barang[i].nama << " " << barang[i].jumlah << " " << barang[i].harga << endl;
    }
    file.close();
}

void tampilBarangDariFile() {
    ifstream file("barang.txt");
    string kode, nama;
    int jumlah, harga;
    cout << "Data Barang dari file:\n";
    while(file >> kode >> nama >> jumlah >> harga) {
        cout << kode << "\t" << nama << "\t" << jumlah << "\t" << harga << endl;
    }
    file.close();
}

int main() {
    Barang barang[100];
    int n = 0, pilih;
    do {
        cout << "1. Tambah Barang\n2. Simpan ke File\n3. Tampilkan dari File\n0. Keluar\nPilih: ";
        cin >> pilih;
        if(pilih == 1) tambahBarang(barang, n);
        else if(pilih == 2) simpanKeFile(barang, n);
        else if(pilih == 3) tampilBarangDariFile();
    } while(pilih != 0);
    return 0;
} 