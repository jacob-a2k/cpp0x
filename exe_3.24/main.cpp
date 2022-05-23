    // RGUMENTY FUNKCJI
/*
#include <iostream>

using namespace std;

void wypisz( int iLiczba){
    cout << "Wartosc liczby wynosi: " << iLiczba << endl;
    iLiczba += 10;
    cout << "Wartosc liczby wynosi: " << iLiczba << endl;
}

int main()
{
    int iNaszaLiczba = 7;
    cout << " Nasza liczba = " << iNaszaLiczba << endl;
    wypisz( iNaszaLiczba );
    cout << "Nasza lczba = " << iNaszaLiczba << endl;

    return 0;
}
*/

    // PRZYKLADY DWA
/*
#include <iostream>
using namespace std;

void wypisz( int  &iLiczba){
        cout << " Wartosc liczby wynosi: " << iLiczba <<  endl;
        iLiczba += 10;
        cout << "Wartosc liczby wynosi: " << iLiczba << endl;
}

int main()
{
    int iNaszaLiczba = 7;
    cout << "Nasza liczba = " << iNaszaLiczba << endl;
    wypisz( iNaszaLiczba );
    cout << "Nasza Liczba = " << iNaszaLiczba << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <limits>

using namespace std;

bool wczytaj_liczbe( int & liczba){
    cin >> liczba;
    if( cin.fail() ){
        cin.clear();
        cin.ignore( numeric_limits < streamsize > ::max(), '\n');
        return false;
    }
    return true;
}

int main()
{
    int x;
    do{
        cout << "Podaj liczbe: ";
    }while( wczytaj_liczbe( x ) == false);

    cout << "Liczba podana to: " << x << endl;

    return 0;
}
*/

    // ZADANIE DOMOWE - dowolny program wykorzystujacy referencje, losowanie randomowej liczby z przedzialu od 1 do 100


#include <iostream>
#include <ctime>

using namespace std;

void get_random( int & a){
     a = rand()%100 + 1;
}

int main()
{
    srand( time( NULL ) );
    int x;
    get_random(x);
    cout << "Wylosowalem randomowa liczbe: " << x << endl;
    return 0;
}




