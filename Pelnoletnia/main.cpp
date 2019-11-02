#include <iostream>

using namespace std;


// Jesli wprowadzona liczba jest mniejsza lub równa zero
// lub jest wieksza od 130 wowczaas program nie dokonuje juz
// dalszego sprawdzania wieku.
//  Za osobe pelnoletnia uznaje sie oosbe, ktora wiek jest wiekszy lub rowny 18

int main()
{
    int wiek;

    cout << "Podaj wiek osoby  : ";
    cin >> wiek;
    if (wiek <= 0 || wiek > 130)
    {
        cout << "Podany wiek jest nieprawidlowy. Podaj liczbe z zakresu 1 - 130";
        return 0;
    }
    if (wiek >= 18)
    {
        cout << "Osoba jest pelnoletnia";
    }
    else
    {
        cout << "Osoba jest niepelnoletnia";
    }
    return 0;
}
