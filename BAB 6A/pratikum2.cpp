#include <iostream>
using namespace std;

int main() {
  int n, i = 1, total = 0;

  cout << "Nama : Muhammad Rafi Sabilillah" << endl;
  cout << "NIM  : 2618040" << endl;
  cout << "===============================" << endl;
  cout << "  Program C++ Penjumlahan Deret" << endl;
  cout << "===============================" << endl;
  cout << endl;

  cout << "Jumlah deret yang diinginkan: ";
  cin >> n;
  cout << endl;

  while (i <= n) {
    cout << i;
    if (i < n) {
      cout << " + ";
    }
    total = total + i;
    i++;
  }
  cout << " = " << total << endl;

  return 0;
}
