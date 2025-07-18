#include <iostream>
using namespace std;

int main() {
    float r, luas, keliling;
    cout << "Jari-jari: "; cin >> r;
    luas = 3.14 * r * r;
    keliling = 2 * 3.14 * r;
    cout << "Luas: " << luas << endl;
    cout << "Keliling: " << keliling << endl;
    return 0;
} 