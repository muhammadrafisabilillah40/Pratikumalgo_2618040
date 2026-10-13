#include <iostream>
using namespace std;

int main() {
  int usia;

  cout << "===== SISTEM PENDETEKSI KATEGORI USIA =====" << endl;
  cout << "Masukkan usia Anda : ";

  if (!(cin >> usia)) {
    cout << "Input tidak valid! Harap masukkan angka." << endl;
    return 0;
  }

  if (usia < 0) {
    cout << "Usia tidak valid!" << endl;
  } else if (usia >= 0 && usia <= 12) {
    cout << "Kategori : Anak-anak" << endl;
  } else if (usia >= 13 && usia <= 17) {
    cout << "kategori :remaja" << endl;
  } else if (usia >= 18 && usia <= 59) {
    cout << "kategori :dewasa" << endl;
  } else {
    cout << "kategori :lansia" << endl;
  }

  return 0;
}
