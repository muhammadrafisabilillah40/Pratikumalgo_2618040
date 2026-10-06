#include <iostream>
using namespace std;

int main() {
  float celcius, fahrenheit, reamur, kelvin;

  cout << "\t=== PROGRAM KONVERSI SUHU ===" << endl;
  cout << endl;

  cout << "Masukan Suhu(Celcius) = ";
  cin >> celcius;

  fahrenheit = (9.0 / 5.0 * celcius) + 32;
  reamur = 4.0 / 5.0 * celcius;
  kelvin = celcius + 273.15;

  cout << "Jadi,\t\t" << celcius << " derajat celcius\t\t= " << fahrenheit
       << " derajat fahrenheit" << endl;
  cout << "\t\t" << fahrenheit << " derajat fahrenheit\t\t= " << reamur
       << " derajat reamur" << endl;
  cout << "\t\t" << reamur << " derajat reamur\t\t= " << kelvin
       << " derajat kelvin" << endl;
  cout << "---------------------------------------" << endl;

  return 0;
}
