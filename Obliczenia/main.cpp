#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a;
    double b;
    double wynik;

    cout << "Obliczenia!" << endl;
    cout << "Podaj wartosc a : ";
    cin >> a;
    cout << "Podaj wartosc b : ";
    cin >> b;
    wynik = abs(sin(pow(a+b, 3)/(pow(a,2)+pow(b,2)+2)) - 5*a*b);
    cout << std::fixed << std::setprecision(2) << "Wynik obliczen = " << wynik;
    return 0;
}
