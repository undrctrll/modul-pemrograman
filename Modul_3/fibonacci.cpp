#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << a << " ";
    for(int i=1; i<n; i++) {
        cout << b << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Jumlah deret: "; cin >> n;
    fibonacci(n);
    return 0;
} 