#include <iostream>
#include <string>
using namespace std;

int pilihan;

string garis() {
    string g = "";
    for (int i = 0; i < 65; i++) {
        g += "=";
    }
    return g;
}

void DataDiri() {
    string nama, nim;
    cout << "Masukan Nama Lengkap Anda : ";
    getline(cin, nama);
    cout << "Masukan Nim Anda : ";
    getline(cin, nim);
    cout << garis() << endl << endl;
}

void BangunDatar() {
    cout << "=== BANGUN DATAR ===" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Keluar" << endl;
    cout << "Masukan Pilihan Bangun Datar : ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Pilihan Anda Adalah Persegi" << endl << endl;
            break;
        case 2:
            cout << "Pilihan Anda Adalah Persegi Panjang" << endl << endl;
            break;
        case 3:
            cout << "Pilihan Anda Adalah Segitiga" << endl << endl;
            break;
        case 4:
            cout << "Pilihan Anda Adalah Lingkaran" << endl << endl;
            break;
        case 5:
            cout << "Keluar dari program..." << endl << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl << endl;
            break;
    }
}

void Hitung() {
    int jenis;
    cout << "Kamu ingin Hitung Luas(1)/Volume(2) ? ";
    cin >> jenis;

    if (jenis == 1) {
        switch (pilihan) {
            case 1: {
                double sisi;
                cout << "Masukan sisi : ";
                cin >> sisi;
                cout << "Luas Persegi : sisi x sisi = " << sisi * sisi << endl;
                break;
            }
            case 2: {
                double panjang, lebar;
                cout << "Masukan panjang : ";
                cin >> panjang;
                cout << "Masukan lebar : ";
                cin >> lebar;
                cout << "Luas Persegi Panjang : panjang x lebar = " << panjang * lebar << endl;
                break;
            }
            case 3: {
                double alas, tinggi;
                cout << "Masukan alas : ";
                cin >> alas;
                cout << "Masukan tinggi segitiga : ";
                cin >> tinggi;
                cout << "Luas Segitiga : 1/2 x alas x tinggi = " << 0.5 * alas * tinggi << endl;
                break;
            }
            case 4: {
                double r;
                cout << "Masukan jari-jari : ";
                cin >> r;
                cout << "Luas Lingkaran : 3.14 x r x r = " << 3.14 * r * r << endl;
                break;
            }
        }
    } else if (jenis == 2) {
        switch (pilihan) {
            case 1: {
                double sisi;
                cout << "Masukan sisi kubus : ";
                cin >> sisi;
                cout << "Volume Kubus : sisi x sisi x sisi = " << sisi * sisi * sisi << endl;
                break;
            }
            case 2: {
                double p, l, t;
                cout << "Masukan panjang : ";
                cin >> p;
                cout << "Masukan lebar : ";
                cin >> l;
                cout << "Masukan tinggi : ";
                cin >> t;
                cout << "Volume Balok : panjang x lebar x tinggi = " << p * l * t << endl;
                break;
            }
            case 3: {
                double alas, tinggi, tinggiPrisma;
                cout << "Masukan alas : ";
                cin >> alas;
                cout << "Masukan tinggi segitiga : ";
                cin >> tinggi;
                cout << "Masukan tinggi prisma : ";
                cin >> tinggiPrisma;
                cout << "Volume Prisma Segitiga : (1/2 x alas x tinggi) x tinggiPrisma = "
                     << (0.5 * alas * tinggi) * tinggiPrisma << endl;
                break;
            }
            case 4: {
                double r, t;
                cout << "Masukan jari-jari : ";
                cin >> r;
                cout << "Masukan tinggi tabung : ";
                cin >> t;
                cout << "Volume Tabung : 3.14 x r x r x tinggi = " << 3.14 * r * r * t << endl;
                break;
            }
        }
    } else {
        cout << "Pilihan perhitungan tidak valid!" << endl;
    }

    cout << endl << garis() << endl << endl;
}

int main() {
    char ulang;
    DataDiri();

    do {
        BangunDatar();

        if (pilihan == 5) {
            break;
        }

        if (pilihan >= 1 && pilihan <= 4) {
            Hitung();
        }

        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "SELAMAT KAMU TELAH MENYELESAIKAN LATIHAN !!!" << endl;
    return 0;
}