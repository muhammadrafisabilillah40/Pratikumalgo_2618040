#include <iostream>
#include <string>
using namespace std;

int main() {
  string nama, nim;
  int pilihan;
  float sisi, panjang, lebar, alas, tinggi, luas;

  cout << "Masukan Nama : ";
  getline(cin, nama);
  cout << "Masukan NIM  : ";
  getline(cin, nim);

  cout << endl;
  cout << "=== MENGHITUNG LUAS BANGUN DATAR ===" << endl;
  cout << "1. Persegi" << endl;
  cout << "2. Persegi Panjang" << endl;
  cout << "3. Segitiga" << endl;
  cout << "Pilih bangun datar: ";
  cin >> pilihan;

  switch (pilihan) {
  case 1:
    cout << "Masukkan sisi : ";
    cin >> sisi;
    luas = sisi * sisi;
    cout << "Luas persegi = " << luas << endl;
    break;

  case 2:
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luas persegi panjang = " << luas << endl;
    break;

  case 3:
    cout << "Masukkan alas : ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga = " << luas << endl;
    break;

  default:
    cout << "Pilihan tidak tersedia!" << endl;
  }

  cout << "----------------------------------" << endl;

  return 0;
}
