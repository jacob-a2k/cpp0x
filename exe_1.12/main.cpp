    //OPERATOR NEGACJI - zwrocenie wartosci przeciwnej
/*
#include <iostream>

using namespace std;

int main()
{
    bool wynik = true;
    cout << "wynik = " << wynik << endl;
    cout << "wynik = " << !wynik << endl;
    cout << "wynik = " << !!wynik << endl;
    wynik = !wynik;
    cout << "wynik = " << wynik << endl;
    wynik = !( 123 > 345);
    cout << "wynik = " << wynik << endl;

    return 0;
}
*/

    //OPERATOR SUMY LOGICZNEJ - co najmniej jedna z wartosci musi byc prawdziwa
/*
#include <iostream>

using namespace std;

int main()
{
    bool wynik = false || false;
    cout << "wynik (false || false) = " << wynik << endl;

    wynik = false || true;
    cout << "wynik (false || true) = " << wynik << endl;

    wynik = true || true;
    cout << "wynik (true || true) = " << wynik << endl;

    bool a = false;
    bool b = false;

    wynik = a || b || true;
    cout << "wynik (a || b || true) = " << wynik << endl;

    bool c = false;
    cout << "(a || b || c) = " << (a || b || c) << endl;

    b = true;
    cout << "(a || b || c) = " << (a || b || c) << endl;
    cout << "(a || !b || c) = " << (a || !b || c) << endl;

    return 0;
}
*/

    //RACHUNEK ZDAN W POLACZENIU Z OPERATORAMI
/*
#include <iostream>

using namespace std;

int main()
{
    bool wynik;
    int liczba;

    liczba = -100;
    wynik = liczba >= 10 || liczba < 0 || liczba == 7;
    cout << "liczba = " << liczba << ", wynik = " << wynik << endl;

    liczba = 0;
    wynik = liczba >= 10 || liczba < 0 || liczba == 7;
    cout << "liczba = " << liczba << ", wynik = " << wynik << endl;

    liczba = 7;
    wynik = liczba >= 10 || liczba < 0 || liczba == 7;
    cout << "liczba = " << liczba << ", wynik = " << wynik << endl;

    liczba = 8;
    wynik = liczba >= 10 || liczba < 0 || liczba == 7;
    cout << "liczba = " << liczba << ", wynik = " << wynik << endl;

    liczba = 10;
    wynik = liczba >= 10 || liczba < 0 || liczba == 7;
    cout << "liczba = " << liczba << ", wynik = " << wynik << endl;

    liczba = 100;
    wynik = liczba >= 10 || liczba < 0 || liczba == 7;
    cout << "liczba = " << liczba << ", wynik = " << wynik << endl;

    return 0;
}
*/

    //OPERATOR ILOCZYNU LOGICZNEGO - wszystkie wartosci musza byc prawdziwe
/*
#include <iostream>

using namespace std;

int main()
{
    bool wynik = false && false;
    cout << "wynik (false && false) = " << wynik << endl;

    wynik = false && true;
    cout << "wynik (false && true) = " << wynik << endl;

    wynik = true && true;
    cout << "wynik (true && true) = " << wynik << endl;

    bool a = false;
    bool b = false;

    wynik = a && b && true;
    cout << "wynik (a && b && true) = " << wynik << endl;

    bool c = false;
    cout << "(a && b && c) = " << (a && b && c) << endl;

    b = true;
    cout << "(a && b && c) = " << (a && b && c) << endl;
    cout << "(a && !b && c) = " << (a && !b && c) << endl;
    cout << "(!a && b && !c) = " << (!a && b && !c) << endl;

    return 0;
}
*/

     //KOLAJNOSC OPERACJI LOGICZNYCH - cwiczenia experymentujace z kolejnoscia
/*
#include <iostream>

using namespace std;

int main()
{
    bool wynik;
    wynik = true && false || !true && false || !(!true && false);
    cout << "wynik = " << wynik << endl;

    return 0;
}
*/

    //ZADANIE DOMOWE - test kolejnosci operacji logicznych

#include <iostream>

using namespace std;

int main()
{
    bool zmienna;
    zmienna = !true && true || false && true || false && false;
    cout << "zmienna = " << zmienna << endl;

    zmienna = !(true && true) || false && true || false && false;
    cout << "zmienna = " << zmienna << endl;

    zmienna = !true && true || false && false || !(false && false);
    cout << "zmienna = " << zmienna << endl;

    zmienna = !true && true || !(false && !true) || false && false;
    cout << "zmienna = " << zmienna << endl;

    return 0;
}
