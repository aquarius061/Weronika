#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double a;
    double b;
    double c;
    double powierzchnia;
    double pojemnosc;

    cout << "Obliczenia!" << endl;
    cout << "Podaj wartosc a : ";
    cin >> a;
    cout << "Podaj wartosc b : ";
    cin >> b;
    cout << "Podaj wartosc c : ";
    cin >> c;
    powierzchnia = 2*a*b + 2*a*c + 2*b*c;
    pojemnosc = a*b*c;
    cout << std::fixed << std::setprecision(2) << "Pole = " << powierzchnia << endl;
    cout << std::fixed << std::setprecision(2) << "Pojemnosc = " << pojemnosc;
    return 0;
}
