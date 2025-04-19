#include <iostream>
using namespace std;

int main() {
    int k1, k2, k3;
    
    cout << "kode ke-1 : ";
    cin >> k1;
    cout << "kode ke-2 : ";
    cin >> k2;
    cout << "kode ke-3 : ";
    cin >> k3;

    if (k1 < 50 || k2 < 50 || k3 < 50) {
        cout << "bahaya" << endl;
    } else if (k1 + k2 + k3 >= 200) {
        cout << "aman" << endl;
    } else {
        cout << "bahaya" << endl;
    }

    return 0;
}