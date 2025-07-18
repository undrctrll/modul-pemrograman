#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah elemen: "; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cout << "Data ke-" << i+1 << ": "; cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout << "Nilai maksimum: " << max << endl;
    cout << "Nilai minimum: " << min << endl;
    return 0;
} 