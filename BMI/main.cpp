#include <iostream>

using namespace std;

int main()
{
    double masa;
    double wzrost;
    double bmi;
    string ocena;

    cout << "Podaj wzrost w cm : ";
    cin >> wzrost;
    cout << "Podaj mase : ";
    cin >> masa;
    if (masa <= 0 || wzrost <=0 )
    {
        cout << "Wzrost i masa musza byc wartosciami wiekszymi od zera.";
        return 0;
    }

    wzrost = wzrost / 100;
    bmi = masa / (wzrost * wzrost);

    if (bmi < 18.5)
    {
        ocena = "niedowaga";
    }
    if (bmi >= 18.5 && bmi < 25 )
    {
        ocena = "waga prawidlowa";
    }
    if (bmi >= 25 && bmi < 30 )
    {
        ocena = "nadwaga";
    }
    if (bmi >= 30 && bmi < 90 )
    {
        ocena = "otylosc";
    }

    cout << "Indeks BMI wynosi : " << bmi << endl;
    cout << "Interpretacja wyniku : " << ocena;
    return 0;
}
