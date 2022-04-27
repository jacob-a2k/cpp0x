    //SWITCH
/*
#include <iostream>

using namespace std;

int main()
{
    char zmienna;
    switch( zmienna )
    {
        //..
    }
    return 0;
}
*/

    // SLOWA KLUCZOWE - SWITCH, CASE, DEFAULT, BREAK;
 /*
#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    switch( liczba )
    {
    case 2:
        cout << "dwa" << endl;
        break;
    case 1:
        cout << "jeden" << endl;
        break;
    case 3:
        cout << "trzy" << endl;
        break;
    default:
        cout << "ani jeden, ani dwa, ani trzy" << endl;
        break;
    }
    return 0;
}
*/

    // TWORZENIE ZMIENNYCH WEWNATRZ 'SWITCH-a' 3 OPCJE
/*
#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    char innaZmienna = 'B';
    switch( liczba )
    {
    case 1:                 // ---tworzenie zmiennej, a nastepnie zainicjalizowanie jej
        char mojaZmienna;
        mojaZmienna = 'A';
        cout << "Znak " << mojaZmienna << endl;
        break;
    case 2:                 // ---tworzenie zmienej przed instrukcja SWITCH
        cout << "Znak " << innaZmienna << endl;
        break;
    case 3:                 // ---tworzenie zmiennej i inicjalizowanie jej z uzyciem klamer {}
        {
            char ostatniaZmienna = 'C';
            cout << "Znak " << ostatniaZmienna << endl;
            break;
        }
    default:
        cout << "ani jeden, ani dwa, ani trzy" << endl;
        break;
    }
    return 0;
}
*/

     // ZADANIE DOMOWE - napisac prosty kalkulator ;)

#include <iostream>

using namespace std;

int main()
{
    cout << " 1.Dodawanie " << endl;
    cout << " 2.Odejmowanie " << endl;
    cout << " 3.Mnozenie " << endl;
    cout << " 4.Dzielenie " << endl;


    int a, b, liczba;
    cout << "\nPodaj pierwsza wartosc: " << endl;
    cin >> a;
    cout << "Podaj druga wartosc: " << endl;
    cin >> b;
    cout << "Wybierz dzialanie matematyczne: " << endl;
    cin >> liczba;

    switch( liczba )
    {
    case 1:
        cout << " Wynik dodawania wynosi: " << a + b << endl;
        break;
    case 2:
        cout << " Wynik odejmowania wynosi: " << a - b << endl;
        break;
    case 3:
        cout << " Wynik iloczynu wynosi: " << a * b << endl;
        break;
    case 4:
        cout << " Wynik ilorazu wynosi: " << a / b << endl;
        break;
    default:
        cout << " Jak nie umiesz to nie korzystaj z kalkulatora" << endl;
        break;
    }
    return 0;
}



