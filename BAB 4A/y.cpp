#include <iostream>
// #include <stdio.h>
using namespace std;

int main() {
  int pilMakanan, jmlMakanan, totMakanan;

  totMakanan = 0;
  cout << "----Pilihan Makanan--------- \n";
  cout << "1.Pecel (10.000)\n";
  cout << "2.Rawon (15.000)\n";
  cout << "3.Soto (12.000)\n";
  cout << "4.Nasi Campur (13.000)\n";
  cout << "Masukkan Pilihan Makanan = ";

  cin >> pilMakanan;

  if ((pilMakanan < 1) || (pilMakanan > 4)) {
    cout << "Anda tidak memesan makanan \n";
  } else {
    cout << "Masukkan Jumlah Yang dipesan = ";
    cin >> jmlMakanan;
    switch (pilMakanan) {
    case 1:
      totMakanan = 10000 * jmlMakanan;
      break;
    case 2:
      totMakanan = 15000 * jmlMakanan;
      break;
    case 3:
      totMakanan = 12000 * jmlMakanan;
      break;
    case 4:
      totMakanan = 13000 * jmlMakanan;
      break;
    default:
      cout << "";
    }
  }
  cout << "Total Makanan = " << totMakanan;
  return 0;
}