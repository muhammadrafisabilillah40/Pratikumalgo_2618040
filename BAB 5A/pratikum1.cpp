#include <iostream>
#include <string>
using namespace std;

int main() {
  string nama, nim;
  int nilai, kode;
  char grade;

  cout << "=== PENENTUAN GRADE NILAI ===" << endl;
  cout << "Masukkan Nama Mahasiswa : ";
  getline(cin, nama);
  cout << "Masukkan NIM            : ";
  getline(cin, nim);
  cout << "Masukkan Nilai (0-100)  : ";
  cin >> nilai;

  if (nilai >= 0 && nilai <= 100) {
    kode = nilai / 10;
  } else {
    kode = -1;
  }

  cout << endl;
  switch (kode) {
  case 10:
  case 9:
  case 8:
    grade = 'A';
    break;
  case 7:
    grade = 'B';
    break;
  case 6:
    grade = 'C';
    break;
  case 5:
    grade = 'D';
    break;
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    grade = 'E';
    break;
  default:
    cout << "Nilai tidak valid" << endl;
    return 0;
  }

  cout << "Nama  : " << nama << endl;
  cout << "NIM   : " << nim << endl;
  cout << "Nilai : " << nilai << endl;
  cout << "Grade : " << grade << endl;

  return 0;
}
