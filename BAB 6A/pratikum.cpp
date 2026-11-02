#include <iostream>
using namespace std;

int main() {
  int n;
  long long faktorial = 1;

  cout << "Nama : Muhammad Rafi Sabilillah" << endl;
  cout << "NIM  : 2618040" << endl;
  cout << "===============================" << endl;
  cout << "  Program C++ Hitung Faktorial" << endl;
  cout << "===============================" << endl;
  cout << endl;

  cout << "Input angka: ";
  cin >> n;

  if (n < 0) {
    cout << "Faktorial negatif tidak ada" << endl;
  } else if (n == 0) {
    cout << "0! = 1" << endl;
  } else {
    cout << n << "! = ";
    for (int i = 1; i <= n; i++) {
      faktorial = faktorial * i;
      cout << i;
      if (i < n) {
        cout << " * ";
      }
    }
    cout << " = " << faktorial << endl;
  }

  return 0;
}
