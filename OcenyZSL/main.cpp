#include <iostream>

using namespace std;

int main()
{
    double punkty;
    double maxpunkty;
    double procent;
    string ocena;

    cout << "Podaj maksymalna liczbe punktow do zdobycia : ";
    cin >> maxpunkty;
    cout << "Podaj liczbe zdobytych punktow : ";
    cin >> punkty;
    if (punkty > maxpunkty)
    {
        cout << "Liczba zdobytych punktow nie moze byc wieksza od maksymalnej liczby punktow";
        return 0;
    }

    procent = punkty / maxpunkty * 100;

    if (procent < 40)
    {
        ocena = "niedostateczna";
    }
    if (procent >= 40 && procent < 60 )
    {
        ocena = "dopuszczajaca";
    }
    if (procent >= 60 && procent < 75 )
    {
        ocena = "dostateczna";
    }
    if (procent >= 75 && procent < 90 )
    {
        ocena = "dobra";
    }
    if (procent >= 90 && procent < 98 )
    {
        ocena = "bardzo dobra";
    }
    if (procent >= 98)
    {
        ocena = "celujaca";
    }

    cout << "Uzyskana ocena : " << ocena;
    return 0;
}
