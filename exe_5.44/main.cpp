        // NEW I DELETE
/*
#include <iostream>

using namespace std;

int main()
{
    int * wsk = new int;
    * wsk = 123;
    cout << wsk;

    delete wsk;
    wsk = nullptr;

    return 0;
}
*/

        // NEW[] I DELETE[]
/*
#include <iostream>

using namespace std;

int main()
{
    int * tab = new int[ 100 ];
    tab[ 42 ] = 123;
    cout <<  tab[ 42 ];

    delete[] tab;

    return 0;
}
*/

        // PRZYKLAD - powiekszajaca sie tablica
/*
#include <iostream>

using namespace std;

int main()
{
    int * tablica = nullptr, rozmiar = 0;
    cout << "Podawaj liczby, 0 konczy wczytywanie.\n";
    while( true ){
        int liczba;
        cin >> liczba;

        if( liczba == 0 )
            break;

        //Brakuje miejsca, utworz wieksza tablice
        int * nowa = new int[ rozmiar + 1 ];

        // Skopiuj dane
        for( int i = 0; i < rozmiar; ++i )
            nowa[ i ] = tablica[ i ];

        // Dodaj nowa wartosc
        nowa[ rozmiar ] = liczba;

        // Usun stara tablice
        delete[] tablica;

        // Zaktualizuj zmienne
        tablica = nowa;
        rozmiar++;
    }
    cout << "Te same liczby, ale odwrotnie!\n";

    for( int i = rozmiar - 1; i >= 0; --i )
        cout << tablica[ i ] << ' ';

    delete[] tablica;


    return 0;
}
*/



#include <iostream>

using namespace std;

int main()
{
    int * tablica = nullptr, rozmiar_tab = 1, ilosc_elementow = 0, indeks = 0;
    cout << "Podawaj liczby, 0 konczy wczytywanie.\n";

    while( true ){

        int liczba;
        cin >> liczba;

        if( liczba == 0 )
            break;
        else
            ilosc_elementow++;

        if( ilosc_elementow >= rozmiar_tab ){
            rozmiar_tab *= 2;

            int *nowa = new int[ rozmiar_tab ];

            for( int i = 0; i < indeks ; ++i)
                nowa[ i ] = tablica[ i ];

            delete[] tablica;
            tablica = nowa;
        }

        tablica[ indeks ] = liczba;

        indeks++;

    }
    cout << "Te same liczby, ale odwrotnie!\n";

    for( int i = indeks - 1; i >= 0; --i )
        cout << tablica[ i ] << ' ';

    delete[] tablica;


    return 0;
}





