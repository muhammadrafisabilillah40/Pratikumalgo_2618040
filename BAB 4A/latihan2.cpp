#include <iostream>
using namespace std;

int main() {
  int tahun;

  cout << "Masukkan th: ";
  cin >> tahun;

  if (tahun % 400 == 0) {
    cout << "Tahun kabisat" << endl;
  } else if (tahun % 100 == 0) {
    cout << "Bukan tahun kabisat" << endl;
  } else if (tahun % 4 == 0) {
    cout << "Tahun kabisat" << endl;
  } else {
    cout << "Bukan tahun kabisat" << endl;
  }

  return 0;
}
