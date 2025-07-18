#include <iostream>
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
    cout << "\nData Mahasiswa:\n";
    for(int i=0; i<n; i++) {
        cout << mhs[i].nim << "\t" << mhs[i].nama << "\t" << mhs[i].nilai << endl;
    }
    return 0;
} 