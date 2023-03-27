#include <iostream>
#include <string>
using namespace std;

bool isDiterima(int math, int basing) {
    double rerata = (math + basing)/2;
    return (rerata >= 70 || math > 80);
}

int main() {
    string nama[2];
    int nilai_math[2], nilai_basing[2];
    bool diterima[2];
    int total_diterima = 0, total_tidak_diterima = 0;


    for (int i = 0; i < 2; i++) {
        cout << "Masukkan nama mahasiswa ke- " << i + 1 << ": ";
        cin >> nama[i];
        cout << "Masukkan nilai matematika mahasiswa ke- " << i + 1 << ": ";
        cin >> nilai_math[i];
        cout << "Masukkan nilai bahasa inggris mahasiswa ke- " << i + 1 << ": ";
        cin >> nilai_basing[i];

        diterima[i] = isDiterima(nilai_math[i], nilai_basing[i]);

        if (diterima[i]) {
            total_diterima++;
        }
        else {
            total_tidak_diterima++;
        }
    }

    cout << "\n\nNama\tStatus" << endl;
    for (int i = 0; i < 2; i++) {
        cout << nama[i] << "\t";
        if (diterima[i]) {
            cout << "Diterima" << endl;
        }
        else {
            cout << "Tidak diterima" << endl;
        }
    }

    cout << "Total kandidat yang diterima : " << total_diterima << endl;
    cout << "Total kandidat yang tidak diterima : " << total_tidak_diterima << endl;
    return 0;
}