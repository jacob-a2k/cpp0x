    // METODY OBSLUGI BLEDOW - GOOD, BAD, FAIL, EOF
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool odczytajPlik( string sNazwaPliku ){
    ifstream plik;
    plik.open( sNazwaPliku.c_str() );

    if( !plik.good() ){
        cout << "Nie udalo sie otworzyc pliku. " << endl;
        return false;
    } //if

    while( true ){
        int iLiczba;
        char cZnak;

        plik >> iLiczba;

        if( !plik.fail() )
            cout << "Liczba = " << iLiczba << endl;
        else{
            if( plik.bad() )
                return false; //wczytywanie liczby nie powiodlo sie z powaznego bledu

            plik.clear();
            plik >> cZnak;

            if( !plik.fail() )
                cout << "Znak = '" << cZnak << "'" << endl;
            else{
                if( plik.eof() )
                    break;

                return false; //wczytywanie znaku powinno sie udac, chyba ze skonczyly sie dane
            }//if
        }//if

    }//while
    cout << "Koniec pliku" << endl;
    return true;
}

int main()
{
    if( odczytajPlik( "cpp0x.txt" ) )
        cout << "Plik zostal poprawnie wczytany! " << endl;

    return 0;
}
*/

    // ZADANIE DOMOWE - program wczytuje, wypisuje i sumuje liczby calkowite
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool readFile( string nameFile ){

    ifstream plik;
    plik.open( nameFile.c_str() );

    if( !plik.good() ){
        cout << "Nie udalo sie otworzyc pliku! " << endl;
        return false;
    }

    int total;
    while( !plik.eof() ){

        int a;

        plik >> a;

        if( plik.fail() ){

            plik.clear();
            plik.ignore();

            continue;
        }
        cout << a << " ";
        total += a;

    }
    cout << endl;
    cout << "Suma liczb wynosi: " << total << endl;
    plik.close();
    return true;
}


int main()
{
    if( readFile( "zadanie_1.txt" ) )
        cout << "Plik zostal poprawnie otworzony!" << endl;

    return 0;
}
*/


#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

bool czyNapotkanoZnakNowegoWiersza( ifstream & plik){
    char cZnak;
    for(;;)
    {
        plik.clear();
        cZnak = plik.peek(); //sprawdzamy jaki kolejny znak zostanie zwrócony przez operację odczytu
        if( plik.fail() )
            return false; //wystąpił błąd odczytu danych

        if( !isspace( cZnak ) )
            return false; //pobrany znak nie jest białym znakiem

        plik.get( cZnak ); //odczytujemy biały znak z pliku
        if( plik.fail() )
            return false; //wystąpił błąd odczytu danych

        if( cZnak == '\n')
            return true;
    }
}

bool readFile( string nameFile ){
    ifstream plik;
    plik.open( nameFile.c_str() );
    if( !plik.good() )
        cout << "Nie udalo sie otworzyc pliku!" << endl;

    int a, total = 0, line = 1;

    while( true ){
        if( czyNapotkanoZnakNowegoWiersza( plik) ){
            cout << total << '\n';
            total = 0;
            line++;
        }
        if( plik >> a )
            total += a;
        else{
            if( plik.eof() )
                break;

            plik.clear();
            plik.ignore( numeric_limits < streamsize > ::max(), '\n');
            cout <<"Bledne dane w wierszu nr " << line << "!\n";
            total = 0;
            ++line;
        }

    }
}

int main()
{
    if( readFile( "zadanie_2.txt") )
        cout << "Plik zostal poprawnie otworzony!" << endl;


    return 0;
}











