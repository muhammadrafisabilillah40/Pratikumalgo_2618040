#include <iostream>
using namespace std;

int main() {
  float jari_jari, tinggi, volume;
  const float phi = 3.141592;

  cout << "=== Program Menghitung Volume Tabung ===" << endl;
  cout << "Masukkan jari-jari tabung : ";
  cin >> jari_jari;
  cout << "Masukkan tinggi tabung    : ";
  cin >> tinggi;

  volume = phi * jari_jari * jari_jari * tinggi;

  cout << "Volume Tabung adalah: " << volume << endl;
  cout << endl;
  cout << "----------------------------------------" << endl;

  return 0;
}
