#include <iostream>
using namespace std;

int main() {

cout << "\n" << endl;
cout << "Kalkulator Penghitung Suhu" << endl;
cout << "Kalkulator ini hanya mengonversi suhu dari Celcius ke Reamur, Fahrenheit, dan Kelvin" << endl;
cout << "\n" << endl;
float Celcius, Reamur, Kelvin, Fahrenheit;

cout << "Masukkan nilai Celcius = ";
cin >> Celcius;

Reamur = 0.8 * Celcius;
Fahrenheit =  (1.8 * Celcius)+ 35;
Kelvin = (Celcius + 273,15);

cout << Celcius << " Celcius" << " = " << Reamur << endl;
cout << Celcius << " Celcius" << " = " << Fahrenheit << endl;
cout << Celcius << " Celcius" << " = " << Kelvin << endl;
cout << "\n" << endl;

return 0;

}
