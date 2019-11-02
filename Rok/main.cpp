#include <iostream>

using namespace std;

int main()
{
    int rok;
    bool przestepny;

    cout << "Podaj rok ";
    cin >> rok;
    if (rok % 4 == 0)  // rok jest podzielny przez 4
    {
        if (rok % 100 == 0)  // jesli rok jest podzielny przez 100
        {
            if (rok % 400 == 0)  // jak jest podzielny przez 400 to jest przestepny
            {
                przestepny = true;
            }
            else  // jak nie jest podzielny przez 400 to nie jest przestepny
            {
                przestepny = false;
            }
        }
    }
    else
    {
        przestepny = false;
    }
    if (przestepny)
    {
        cout << "To jest rok przestepny!";
    }
    else
    {

        cout << "To nie jest rok przestepny";
    }
    return 0;
}
