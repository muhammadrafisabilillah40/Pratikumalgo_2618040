#include <iostream>
using namespace std;

int main() {
  double kwh, tarif = 0, totalTagihan, bayar;
  int pilihan;

  cout << "Masukkan pemakaian listrik (kWh): ";
  cin >> kwh;

  cout << "\nPilih Golongan Daya Listrik:\n";
  cout << "1. 450 VA  (Rp 415 / kWh)\n";
  cout << "2. 900 VA  (Rp 1.352 / kWh)\n";
  cout << "3. 1300 VA (Rp 1.444 / kWh)\n";
  cout << "Pilihan golongan (1-3) : ";
  cin >> pilihan;

  switch (pilihan) {
  case 1:
    tarif = 415;
    break;
  case 2:
    tarif = 1352;
    break;
  case 3:
    tarif = 1444;
    break;
  default:
    cout << "Golongan daya tidak valid!" << endl;
    return 0;
  }

  cout << "---------------------------------------------" << endl;

  totalTagihan = kwh * tarif;
  cout << "Total Perkiraan Tagihan : Rp. " << totalTagihan << endl;

  cout << "Masukkan Uang Pembayaran : Rp. ";
  cin >> bayar;

  if (bayar >= totalTagihan) {
    cout << "\nPembayaran Berhasil!" << endl;
    cout << "Uang Kembalian : Rp. " << bayar - totalTagihan << endl;
  } else {
    cout << "Uang Anda kurang sebesar : Rp. " << totalTagihan - bayar << endl;
  }

  return 0;
}
