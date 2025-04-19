#include <iostream>
#include <string>

using namespace std;

int main() {
    string judulBuku;
    cout << "Masukkan daftar judul buku: ";
    getline(cin, judulBuku);

    int count = 0;
    int i = 0;

    while (i < judulBuku.length() && judulBuku[i] == ' ') {
        i++;
    }

    while (i < judulBuku.length()) {

        if (judulBuku[i] != ' ') {
            count++; 

            while (i < judulBuku.length() && judulBuku[i] != ' ') {
                i++;
            }
        }
        while (i < judulBuku.length() && judulBuku[i] == ' ') {
            i++;
        }
    }

    cout << "Jumlah judul buku: " << count << endl;

    return 0;
}