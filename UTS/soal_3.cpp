#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah:" << endl;
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilai1;
    cout << "Probabilitas dan Statistika: ";
    cin >> nilai2;
    cout << "Sistem Operasi: ";
    cin >> nilai3;

    cout << "\nHasil Penilaian:\n";
    
    cout << "Algoritma dan Pemrograman: ";
    if (nilai1 >= 60) {
        cout << "Lulus." << endl;
    } else {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    cout << "Probabilitas dan Statistika: ";
    if (nilai2 >= 60) {
        cout << "Lulus." << endl;
    } else {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    cout << "Sistem Operasi: ";
    if (nilai3 >= 60) {
        cout << "Lulus." << endl;
    } else {
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    double rataRata = (nilai1 + nilai2 + nilai3) / 3.0;
    cout << "\nRata-rata Nilai: " << rataRata << endl;
    if (rataRata >= 60) {
        cout << "Status Kelulusan Semester: LULUS" << endl;
    } else {
        cout << "Status Kelulusan Semester: TIDAK LULUS" << endl;
    }
    
    return 0;
}