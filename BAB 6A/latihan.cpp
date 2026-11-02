#include <iostream>
using namespace std;

int main() {
  int pilihan, jumlah;
  int totalPembayaran = 0;
  char lagi;

  do {
    cout << "======================================" << endl;
    cout << "       PROGRAM KASIR SEDERHANA        " << endl;
    cout << "======================================" << endl;
    cout << "1. Nasi Goreng  - Rp15000" << endl;
    cout << "2. Mie Goreng   - Rp12000" << endl;
    cout << "3. Bakso        - Rp10000" << endl;
    cout << "4. Es Teh       - Rp5000" << endl;
    cout << "======================================" << endl;

    cout << "Pilih item (1-4): ";
    cin >> pilihan;

    cout << "Masukkan jumlah: ";
    cin >> jumlah;

    switch (pilihan) {
    case 1:
      cout << "Anda membeli Nasi Goreng" << endl;
      totalPembayaran += 15000 * jumlah;
      break;
    case 2:
      cout << "Anda membeli Mie Goreng" << endl;
      totalPembayaran += 12000 * jumlah;
      break;
    case 3:
      cout << "Anda membeli Bakso" << endl;
      totalPembayaran += 10000 * jumlah;
      break;
    case 4:
      cout << "Anda membeli Es Teh" << endl;
      totalPembayaran += 5000 * jumlah;
      break;
    default:
      cout << "Pilihan item tidak valid!" << endl;
      break;
    }

    cout << "\nApakah ingin membeli item lagi? (y/t): ";
    cin >> lagi;
  } while (lagi == 'y' || lagi == 'Y');

  cout << "======================================" << endl;
  cout << "TOTAL PEMBAYARAN = Rp" << totalPembayaran << endl;
  cout << "Terima kasih telah berbelanja!" << endl;
  cout << "======================================" << endl;

  return 0;
}
