#include <iostream>
using namespace std;

int main() {
  int level = 1, hasil, jawaban;
  bool benar = true;

  cout << "Nama : Muhammad Rafi Sabilillah" << endl;
  cout << "NIM  : 2618040" << endl;
  cout << "===============================" << endl;
  cout << "     PROGRAM GAME MATEMATIKA" << endl;
  cout << "===============================" << endl;
  cout << endl;

  do {
    hasil = level + (level * 5);

    cout << "Level " << level << endl;
    cout << "Berapa hasil dari " << level;
    cout << " + " << level * 5 << " ? ";
    cin >> jawaban;

    if (jawaban == hasil) {
      cout << "Benar! Naik level!" << endl;
      level++;
      if (level <= 5) {
        cout << endl;
      }
    } else {
      cout << "Game Over" << endl;
      benar = false;
    }
  } while (benar && level <= 5);

  if (benar) {
    cout << "Selamat! Kamu menyelesaikan ";
    cout << "semua level!" << endl;
  }

  return 0;
}
