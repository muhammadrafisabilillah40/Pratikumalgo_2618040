#include <iostream>
using namespace std;

int main() {
  int nilai1, nilai2;

  cout << "Masukkan nilai pertama: ";
  cin >> nilai1;

  cout << "Masukkan nilai kedua   : ";
  cin >> nilai2;

  if ((nilai1 > 60) & (nilai2 > 60)) {
    cout << "Selamat, Anda LULUS!" << endl;
  } else {
    cout << "Maaf, Anda TIDAK LULUS!" << endl;
  }

  return 0;
}
