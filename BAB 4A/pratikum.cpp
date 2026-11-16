#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string nama, nim;
  long long pendapatan;
  int tanggungan;
  int tarifPersen;
  double pajak;

  cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl;

  cout << "Nama Anda : ";
  getline(cin, nama);

  cout << "NIM Anda  : ";
  getline(cin, nim);

  cout << "\n========== DATA PENDAPATAN ==========" << endl;

  cout << "Pendapatan bulanan (Rp): ";
  cin >> pendapatan;

  cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
  cin >> tanggungan;

  if (pendapatan < 0) {
    cout << "\nInput tidak valid! Pendapatan tidak boleh negatif." << endl;
    return 0;
  }

  if (pendapatan < 5000000) {
    tarifPersen = 0;
  } else if (pendapatan < 10000000) {
    tarifPersen = 5;
  } else if (pendapatan < 20000000) {
    tarifPersen = 10;
  } else {
    tarifPersen = 15;
  }

  pajak = pendapatan * tarifPersen / 100.0;

  if (tanggungan == 1) {
    pajak = pajak - 100000;
  }

  if (pajak < 0) {
    pajak = 0;
  }

  cout << "\n========== HASIL PERHITUNGAN ==========" << endl;
  cout << "Nama Anda   : " << nama << endl;
  cout << "NIM Anda    : " << nim << endl;
  cout << "Pendapatan  : Rp" << pendapatan << endl;
  cout << "Tarif pajak : " << tarifPersen << "%" << endl;
  cout << "Pajak akhir : Rp" << fixed << setprecision(0) << pajak << endl;

  return 0;
}
