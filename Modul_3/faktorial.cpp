#include <iostream>
using namespace std;

int faktorial(int n) {
    if(n <= 1) return 1;
    else return n * faktorial(n-1);
}

int main() {
    int n;
    cout << "Masukkan bilangan: "; cin >> n;
    cout << "Faktorial: " << faktorial(n) << endl;
    return 0;
} 