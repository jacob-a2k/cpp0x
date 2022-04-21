// Kolejnosc wykonywania dzialan
/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Obliczam: 3+2*4=" << 3 + 2 * 4 << endl;
    cout << "Obliczam: (3+2)*4=" << (3 + 2) * 4 << endl;
    return 0;
}
*/

    // Obliczenia z wykorzystaniem zmiennych
/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe: ";
    int zmienna;
    cin >> zmienna;
    cout << "Obliczam: 3+zmienna*4=" << 3 + zmienna * 4 << endl;
    cout << "Obliczam: (3+zmienna)*4=" << (3 + zmienna) * 4 << endl;
    return 0;
}
*/

        // Zapisywanie obliczen do zmiennych
/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe: ";
    int zmienna;
    cin >> zmienna;
    int wynik1 = 3 + zmienna *4;
    int wynik2 = (3 + zmienna) * 4;
    cout << "Wynik pierwszy: " << wynik1 << endl;
    cout << "Wynik drugi: " << wynik2 << endl;
    return 0;
}
*/

            // Reszta z dzielenia, operator modulo
/*

#include <iostream>

using namespace std;

int main( void )
{
    int a;
    cout << "Podaj a: ";
    cin >> a;

    int b;
    cout << "Podaj b: ";
    cin >> b;

    cout << "a % b = " << a % b << endl;

    return 0;
}
*/

               //  Podsumowanie rozdzialu

/*
#include <iostream>

using namespace std;

int main()
{
    double liczba = 123.3;
    cout << "liczba = " << liczba << endl;

    liczba = liczba + 6.7;
    cout << "liczba = " << liczba << endl;

    liczba -= 30;
    cout << "liczba = " << liczba << endl;

    liczba /= 11;
    cout << "liczba = " << liczba << endl;

    liczba *= 3;
    cout << "liczba = " << liczba << endl;

    int nowa = liczba;
    cout << "nowa = " << nowa << endl;

    nowa %= 8;
    cout << "nowa = " << nowa << endl;

    nowa++;
    cout << "nowa = " << nowa << endl;

    ++nowa;
    cout << "nowa = " << nowa << endl;

    nowa *= 10;
    cout << "nowa = " << nowa << endl;

    --nowa;
    cout << "nowa = " << nowa << endl;

    nowa--;
    cout << "nowa = " << nowa << endl;

    return 0;
}
*/

    // Zadanie domowe - liczby calkowite


#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj a: " << endl;
    int a;
    cin >> a;

    cout << "Podaj b: " << endl;
    int b;
    cin >> b;

    cout << " a + b = " << a + b << endl;
    cout << " a - b = " << a - b << endl;
    cout << " a * b = " << a * b << endl;
    cout << " a / b = " << a / b << endl;
    cout << " a % b = " << a % b << endl;

    return 0;
}


    // Zadanie domowe - liczby rzeczywiste

/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj wartosc a: " << endl;
    float a;
    cin >> a;

    cout << "Podaj wartosc b: " << endl;
    float b;
    cin >> b;

    cout << " a + b = " << a + b << endl;
    cout << " a - b = " << a - b << endl;
    cout << " a * b = " << a * b << endl;
    cout << " a / b = " << a / b << endl;

    return 0;
}
*/
