    // WCZYTYWNIE DANYCH Z PLIKU ZA POMOCA OPERATORA '>>'
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void wykonajOperacje( int liczba1, string napis, int liczba2 ){
    if( napis == "dodac" ){
        cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << endl;
    }
    else if( napis == "odjac" ){
        cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << endl;
    }
    else{
        cout << "Nieznana operacja \"" << napis << "\" - nie mozna wykonac obliczen." << endl;
    }
}

bool wczytajPlik( string nazwaPliku){
    ifstream plik;
    plik.open( nazwaPliku.c_str() );
    if( !plik.good() )
        return false;

    while( true ){
        int a;
        string b;
        int c;
        plik >> a >> b >> c;
        if( !plik.fail() )
            wykonajOperacje( a, b, c);
        else
            break;
    }
    return true;
}

int main()
{
    if( !wczytajPlik( "dane.txt" ) )
        cout << "Nie udalo sie otworzyc pliku!" << endl;

    return 0;
}
*/



    // ZADANIE DOMOWE -  wczytaj wszystkie liczby z pliku i wypisz ich sume    |WAZNE| ZNAM ILOSC LICZB W PLIKU!!!

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void wykonajOperacje( int a, int b, int c, int d ){
    cout << a + b + c + d << endl;
}

bool wczytajPlik( string nazwaPliku){
    ifstream plik;
    plik.open( nazwaPliku.c_str() );
    if( !plik.good() ){
        return false;
    }
    while( true ){
        int a, b, c, d;
        plik >> a >> b >> c >> d;
        if( !plik.fail() )
            wykonajOperacje( a, b, c, d );
        else
            break;
    }
    return true;
}

int main()
{
    if( !wczytajPlik( "liczby.txt" ) )
        cout << "Nie udalo sie otworzyc pliku! " << endl;

    return 0;
}


