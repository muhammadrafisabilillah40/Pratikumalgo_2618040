#include <iostream>
#include <string>
using namespace std;

int pilihanLayanan;

const int tarifCuciSetrika = 7000;
const int tarifCuciBiasa = 5000;

void Garis() {
    for (int i = 0; i < 30; i++) {
        cout << "=";
    }
    cout << endl;
}

void dataPelanggan() {
    string nama, noHp;
    cout << "Masukan Nama Pelanggan : ";
    getline(cin, nama);
    cout << "Masukan No. HP : ";
    getline(cin, noHp);
    cout << "Selamat datang, " << nama << "!" << endl;
}

void tampilkanTarif() {
    cout << "Tarif Laundry per Kg:" << endl;
    cout << "Cuci + Setrika: Rp " << tarifCuciSetrika << "/kg" << endl;
    cout << "Cuci Biasa: Rp " << tarifCuciBiasa << "/kg" << endl;
}

int hitungCuciSetrika(int berat) {
    return berat * tarifCuciSetrika;
}

int hitungCuciBiasa(int berat) {
    return berat * tarifCuciBiasa;
}

int main() {
    int berat, totalBiaya;

    dataPelanggan();
    Garis();

    cout << "Pilih Jenis Layanan :" << endl;
    cout << "1. Cuci + Setrika" << endl;
    cout << "2. Cuci Biasa" << endl;
    cout << "Pilihanmu : ";
    cin >> pilihanLayanan;

    Garis();

    if (pilihanLayanan == 1) {
        cout << "Pilihanmu adalah Cuci + Setrika" << endl;
        cout << "Masukkan berat pakaian (kg): ";
        cin >> berat;

        totalBiaya = hitungCuciSetrika(berat);
        cout << "Biaya Laundry = Rp " << totalBiaya << endl;
        cout << "Detail: " << berat << " kg x Rp " << tarifCuciSetrika << endl;
    } else if (pilihanLayanan == 2) {
        cout << "Pilihanmu adalah Cuci Biasa" << endl;
        cout << "Masukkan berat pakaian (kg): ";
        cin >> berat;

        totalBiaya = hitungCuciBiasa(berat);
        cout << "Biaya Laundry = Rp " << totalBiaya << endl;
        cout << "Detail: " << berat << " kg x Rp " << tarifCuciBiasa << endl;
    } else {
        cout << "Pilihan layanan tidak valid!" << endl;
    }

    Garis();
    tampilkanTarif();

    return 0;
}