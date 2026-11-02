#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Nama : Muhammad Rafi Sabilillah" << endl;
  cout << "NIM  : 2618040" << endl;
  cout << endl;

  cout << "Masukkan jumlah angka: ";
  cin >> n;
  cout << endl;

  cout << "=== Deret Campur Logika ===" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      cout << i * 2 << " ";
    } else if (i % 3 == 0) {
      cout << i + 3 << " ";
    } else {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
