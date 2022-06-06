    // PRZYKLAD ODCZYTYWANIA CALEGO PLIKU
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool wyswietlZawartoscPliku( string sNazwaPliku){

    ifstream plik;
    plik.open( sNazwaPliku.c_str() );
    if( !plik.good() )
        return false;

    string wiersz;
    while( getline( plik, wiersz ) )
        cout << wiersz << endl;

    plik.close();
    return true;
}

int main()
{
    if( !wyswietlZawartoscPliku("cpp0x.txt") )
        cout << "Nie udalo sie otworzyc pliku o podanej nazwie." << endl;

    return 0;
}
*/


    // ZADANIE DOMOWE - odczytanie pliku i wypisanie wierszy z wyrazem podanym przez uzytkownika

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool szukajFrazy( string & tekst, string szukanaFraza){
    size_t znalezionaPozycja = tekst.find( szukanaFraza );
    if( znalezionaPozycja != string::npos)
        return true;
    else
        return false;

}

bool wyswietl( string nazwaPliku ){
    bool znaleziono = false;
    ifstream plik;
    plik.open( nazwaPliku.c_str() );
    if( !plik.good() )
        return false;

    while( plik.good() ){
        cout << "Podaj wyraz, ktory chcesz wyszukac " << endl;
        string wyraz;
        cin >> wyraz;
        string wiersz;
        while( getline( plik, wiersz ) )
            if( szukajFrazy( wiersz, wyraz )){
                cout << wiersz << endl;
                znaleziono = true;
            }
    }
    if( !znaleziono)
        cout << "Nie znaleziono" << endl;

    plik.close();
    return true;

}

int main()
{
    if( wyswietl( "cpp0x.txt" ) != 1)
        cout << " Nie udalo sie otworzyc pliku o podanej nazwie." << endl;


    return 0;
}







