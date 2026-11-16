#include <iostream>
using namespace std;

int main() {
  char nama[50], nim[20];
  float uts, uas, rata_rata;

  cout << "===== PENILAIAN MAHASISWA =====" << endl;
  cout << "Nama Mahasiswa : ";
  cin.getline(nama, sizeof(nama));
  cout << "NIM            : ";
  cin >> nim;
  cout << "Nilai UTS      : ";
  cin >> uts;
  cout << "Nilai UAS      : ";
  cin >> uas;

  rata_rata = (uts + uas) / 2.0;

  cout << endl;
  cout << "===== HASIL PENILAIAN =====" << endl;
  cout << "Nama Mahasiswa : " << nama << endl;
  cout << "NIM            : " << nim << endl;
  cout << "Nilai UTS      : " << uts << endl;
  cout << "Nilai UAS      : " << uas << endl;
  cout << "Nilai Rata-rata: " << rata_rata << endl;

  cout << "Status         : " << ((rata_rata >= 60) ? "Lulus" : "Tidak Lulus")
       << endl;

  return 0;
}
