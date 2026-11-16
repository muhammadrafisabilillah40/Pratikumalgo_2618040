#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah baris: ";
  cin >> n;

  if (n > 0) {
    int i = 1;
    do {
      int j = 1;
      do {
        cout << j;
        j++;
      } while (j <= i);

      cout << endl;
      i++;
    } while (i <= n);
  }
  return 0;
}
