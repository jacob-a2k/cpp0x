    // OKRESLANIE POZYCJI ODCZYTU DANYCH Z PLIKU - seekg(), beg, cur, end
/*
    // 1 WERSJA METODY
ifstream plik;
//(...) otwierasz plik i weryfikujesz czy otwarcie sie powiodlo
plik.seekg( 10 ); // Ustawiasz pozycje odczytu danych od 11 znaku (pamietaj, pozycje numeruje sie od zera)
//(...) wykonujesz operacje odczytu danych z pliku
plil.seekg( 1 ); // Ustawiasz pozyche odczytu danych od drugiego znaku.
//(...) wykonujesz operacje odczytu danych z pliku
plik.seekg( 0 ); //Ustawiasz pozycje odczytu danych od pierwszego znaku.
//(...) wykonujesz operacje odczytu danych z pliku

    // 2 WERSJA METODY
plik.seekg( 0, std::ios::end ); // Przesuniecie pozycji do oczytu na koniec pliku
//(...) wykonujesz operacje odczytu danych z pliku
plik.seekg( -3, std::ios::cur ); // Przesuniecie pozycji odczytu danych o 3 znaki w lewo wzgledem aktualnej pozycji
//(...) wykonujesz operacje odczytu danych z pliku
plik.seekg( 5, ios::beg ); // Okreslenie pozycji odczytu wzgledem poczatku pliku
                            // Ustawienie pozycji odczytu danych od 6 znaku
plik.seekg( 5 ); // Zapis rownowazny powyzszemu
//(...) wykonujesz operacje odczytu danych z pliku
*/

    // POBIERANIE AKTUALNEJ POZYCJI ODCZYTU DANYCH Z PLIKU
/*
streampos iOdczytanaPozycja = plik.tellg();
cout << "Aktualna pozycja odczytu danych z pliku: " << iOdczytanaPozycja << endl;

plik.seekg( 8, ios::cur); // wykorzystanie metody tellg() do okreslenia pozycji danych w pliku
plik.seekg( plik.tellg() + 8 ); // zapis rownowazny z powyższym
*/



/*
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik( "dane.txt");
    if( !plik.good() )
        return 0;

    streampos iPozycjaStartowa = 4;
    plik.seekg( iPozycjaStartowa );

    int iLiczba;
    plik >> iLiczba;

    int iWczytanychZnakow = plik.tellg() - iPozycjaStartowa;
    cout << "Liczba: " << iLiczba << endl;
    cout << " Wczytano " << iWczytanychZnakow << " znakow" << endl;

    return 0;
}
*/


#include <iostream>
#include <fstream>

using namespace std;

bool wczytaj( string tekst ){
    ifstream plik( tekst);
    if( !plik.good() ){
        cout << " Nie udalo sie otworzyc pliku! " << endl;
        return false;
    }
     char znak;
     plik >> znak;

     while ( true ){
        plik.seekg( 2, ios::cur);
        plik.get(znak);
        if( !plik.fail() )
            cout << znak << " ";
        else{
            if( plik.bad() )
                return false;
            else{
                if( plik.eof() )
                    break;

                return false;
            }
        }
     }
     cout << "\nKoniec pliku!" << endl;
    return true;

}

int main()
{
    if( wczytaj( "dane.txt") )
        cout << "Poprawnie wczytano dane!" << endl;

    return 0;
}







