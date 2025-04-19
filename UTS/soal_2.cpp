#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan kode 3 digit: ";
    cin >> angka;

    
    if (angka >= 100 && angka <= 999) {
    
        int digit1 = angka / 100;
        int digit2 = (angka / 10) % 10;
        int digit3 = angka % 10;

        cout << "jumlah digit = " << (digit1 + digit2 + digit3) << endl;
    } else {
        cout << "Kode Salah!" << endl;
    }

    return 0;
}