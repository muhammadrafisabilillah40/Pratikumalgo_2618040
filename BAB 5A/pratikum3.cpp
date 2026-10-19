#include <iostream>
#include <string>
using namespace std;

int main() {
  string nama, menu;
  int pilihan, jumlah, harga;
  double total, diskon = 0, totalBayar;

  cout << "Nama pemesan          : ";
  getline(cin, nama);

  cout << "=== PEMESANAN MENU KANTIN ===" << endl;
  cout << "Daftar Menu:" << endl;
  cout << "1. Nasi Goreng  - Rp15000" << endl;
  cout << "2. Mie Ayam     - Rp12000" << endl;
  cout << "3. Ayam Geprek  - Rp18000" << endl;
  cout << "4. Es Teh       - Rp5000" << endl;
  cout << "-----------------------------" << endl;

  cout << "Pilihan menu (1-4)    : ";
  cin >> pilihan;

  switch (pilihan) {
  case 1:
    menu = "Nasi Goreng";
    harga = 15000;
    break;
  case 2:
    menu = "Mie Ayam";
    harga = 12000;
    break;
  case 3:
    menu = "Ayam Geprek";
    harga = 18000;
    break;
  case 4:
    menu = "Es Teh";
    harga = 5000;
    break;
  default:
    cout << "Pilihan menu tidak ada!" << endl;
    return 0;
  }

  cout << "Jumlah pesanan        : ";
  cin >> jumlah;

  total = harga * jumlah;
  if (total > 40000) {
    diskon = total * 0.08;
  }
  totalBayar = total - diskon;

  cout << endl;
  cout << "===== STRUK PEMESANAN =====" << endl;
  cout << "Nama Pemesan     : " << nama << endl;
  cout << "Menu             : " << menu << endl;
  cout << "Harga Satuan     : Rp" << harga << endl;
  cout << "Jumlah Pesanan   : " << jumlah << endl;
  cout << "Total Pembayaran : Rp" << total << endl;
  cout << "Diskon (8%)      : Rp" << diskon << endl;
  cout << "Total Bayar      : Rp" << totalBayar << endl;

  return 0;
}
