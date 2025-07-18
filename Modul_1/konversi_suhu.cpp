#include <iostream>
using namespace std;

int main() {
    float suhu;
    int pilih;
    cout << "1. Celsius ke Fahrenheit\n2. Fahrenheit ke Celsius\nPilih: ";
    cin >> pilih;
    if(pilih == 1) {
        cout << "Masukkan suhu (C): "; cin >> suhu;
        cout << "Fahrenheit: " << (suhu * 9/5) + 32 << endl;
    } else if(pilih == 2) {
        cout << "Masukkan suhu (F): "; cin >> suhu;
        cout << "Celsius: " << (suhu - 32) * 5/9 << endl;
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
} 