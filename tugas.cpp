#include <iostream>
using namespace std;

int main() {
  cout << "2618040 || Muhammad Rafi Sabilillah" << endl;
  cout << "TUGAS BAB 7" << endl;
  cout << "==========================================" << endl;

  int n1;
  cout << "1. Membuat Kotak Angka Diagonal" << endl;
  cout << "   Masukkan ukuran kotak: ";
  cin >> n1;
  cout << endl;

  for (int i = 1; i <= n1; i++) {
    for (int j = 1; j <= n1; j++) {
      if (i == j) {
        cout << "1 ";
      } else {
        cout << "0 ";
      }
    }
    cout << endl;
  }

  int n2;
  cout << endl;
  cout << "2. Membuat Segitiga Terbalik Genap" << endl;
  cout << "   Masukkan ukuran segitiga: ";
  cin >> n2;
  cout << endl;

  int i2 = n2;
  while (i2 >= 1) {
    int j2 = 1;
    int genap = 2;
    while (j2 <= i2) {
      cout << genap << " ";
      genap += 2;
      j2++;
    }
    cout << endl;
    i2--;
  }

  int n3;
  cout << endl;
  cout << "3. Membuat Segitiga Siku-siku Huruf" << endl;
  cout << "   Masukkan ukuran segitiga siku-siku: ";
  cin >> n3;
  cout << endl;

  if (n3 > 0) {
    int i3 = 1;
    do {
      int j3 = 1;
      char huruf = 'A';
      do {
        cout << huruf << " ";
        huruf++;
        j3++;
      } while (j3 <= i3);
      cout << endl;
      i3++;
    } while (i3 <= n3);
  }

  return 0;
}
