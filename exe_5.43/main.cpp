        // ODCZYTYWANIE ADRESU ZMIENNEJ
/*
#include <iostream>

using namespace std;

int main()
{
    int zmienna = 123;
    int * wskaznik = & zmienna;
    int tablica[ 2 ] = {10,20 };

    cout << "Wartosc: " << zmienna << ", Adres: " << wskaznik << ", Adress wskaznika: " << & wskaznik << endl;
    cout << & tablica[ 0 ] << '\n' << & tablica[ 1 ] << '\n' << endl;


    return 0;
}
*/

        // UZYWANIE ZMIENNEJ PRZEZ WSKAZNIK
/*
#include <iostream>

using namespace std;

int main()
{
    int zmienna = 123;
    int * wskaznik = & zmienna;

    cout << zmienna << endl;
    cout << wskaznik << endl;
    cout << * wskaznik << endl;
    cout << endl;

    cout << zmienna << " = " << * wskaznik << endl;
    zmienna = 42;
    cout << zmienna << " = " << *wskaznik << endl;
    *wskaznik = 357;
    cout << zmienna << " = " << *wskaznik << endl;


    return 0;
}
*/

        // ARYTMETYKA NA WSKAZNIKACH
/*
#include <iostream>

using namespace std;

int main()
{
    int tablica[ 2 ] = { 1, 2 };

    cout << & tablica[ 0 ] << endl;
    cout << & tablica[ 0 ] + 1 << endl;

    cout << endl;

    cout << tablica << endl; // mimo, ze tablica nie jest wskaznikiem na swoj pierwszy element, to jest konwertowalna na taki wskaznik
    cout << tablica + 1 << endl; // krotszy zapis powyzszych 2 linijek

    cout << endl;

    cout << tablica[ 1 ] << endl; // operator indeksowania [] tez jest deferencja, obie linijki sa rownowazne
    cout << *( tablica + 1 ) << endl;

    cout << endl;

    int * wskaznikTab = tablica; // zastosowanie indeksowania [] na wskazniku
    cout << wskaznikTab[ 1 ] << endl;

    return 0;
}
*/

        // ODEJMOWANIE WSKAZNIKOW - program oblicza rozmiar tablicy
/*
#include <iostream>

using namespace std;

int main()
{
    int tablica[ 2 ] = { 1, 2 };
    int *wskBegin = tablica;
    int *wskEnd = tablica + 2;

    cout << wskBegin << '\n' << wskEnd << endl;
    cout << wskEnd - wskBegin << endl;

    return 0;
}
*/

        // WSKAZNIKI char*, const char*
/*
#include <iostream>

using namespace std;

int main()
{
    char tab[ 10 ] { 'a', 's', 'd', 0};
    cout << tab << endl;

    cout << endl;

    cout << "Hello world" << endl;

    cout << endl;

    const char * hello = "Hello world";
    cout << hello << endl;

    return 0;
}
*/

        // WSKAZNIK a CONST
/*
#include <iostream>

using namespace std;

int main()
{
    const int stala = 123;
    const int * wskaznikNaStala = &stala;

    const int *p1; // Wskaznik na stala, bo const jest po stronie typu wskazywanego ( const int)
    int * const p2; // Staly wskaznik, bo const jest po stronie wskaznika
    const int * const p3; // Staly wskaznik na stala, bo const jest wszedzie

    // Zanim postawimy gwiazdke mowiwmy o typie wskazywanym, po zwiazdce mowimy juz o wskazniku

    const int s1 = 1;
    int const s2 = 1;

    const int * p1;
    int const * p2;


    return 0;
}
*/

        //PRZYKLAD
/*
#include <iostream>

using namespace std;

void generuj( int * begin, int * end, int start){
    for( int *p = begin; p != end; ++p){
        *p = start;
        ++start;
    }
}
void wypisz( int * begin, int size ){
    while( size > 0 ){
        cout << * begin << ' ';
        ++begin;
        --size;
    }
}


int main()
{
    int tab[ 10 ];
    generuj( tab, tab + 10, 100 );
    wypisz( tab, 10 );

    return 0;
}
*/

    // WYKORZYSTANIE SORTOWANIA BABELKOWE - sortowanie liczb w tablicy

#include <iostream>

using namespace std;

void sortuj( int *begin, int *end){     // metoda babelkowa

    int size = end - begin;
    for( int i = 0; i < size; ++i ){
        for( int j = 0; j < size - 1; ++j ){
            if( begin[ j ] > begin[ j + 1 ] )
                swap( begin[ j ], begin[ j + 1 ] );
        }
    }

}

void wypisz( int *begin, int size){
    while( size > 0 ){
        cout << *begin << ' ';
        ++begin;
        --size;
    }
}

int main()
{
    int tab[ 10 ] = { 0, 9, 1, 3, 8, 2, 6, 7, 5, 4 };

    sortuj( tab, tab + 10 );
    wypisz( tab, 10 );

    cout << '\n';

    int tab2[ 16 ] = {9, 7, 8, 6, 5, 4, 4, 0, 9, 6, 7, 1, 6, 3, 1, -100};
    sortuj( tab2, tab2 + 15 );
    wypisz( tab2, 15 );

    return 0;
}




