#include <iostream>
#include <fstream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float nilai;
};

int main() {
    int n;
    cout << "Jumlah mahasiswa: "; cin >> n;
    Mahasiswa mhs[n];
    for(int i=0; i<n; i++) {
        cout << "Data ke-" << i+1 << endl;
        cout << "NIM: "; cin >> mhs[i].nim;
        cout << "Nama: "; cin >> mhs[i].nama;
        cout << "Nilai: "; cin >> mhs[i].nilai;
    }
    ofstream file("data.txt");
    for(int i=0; i<n; i++) {
        file << mhs[i].nim << " " << mhs[i].nama << " " << mhs[i].nilai << endl;
    }
    file.close();
    cout << "Data berhasil disimpan ke data.txt" << endl;
    return 0;
} 