#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    string nim, nama;
    float nilai;
    cout << "Data Mahasiswa dari file:\n";
    while(file >> nim >> nama >> nilai) {
        cout << nim << "\t" << nama << "\t" << nilai << endl;
    }
    file.close();
    return 0;
} 