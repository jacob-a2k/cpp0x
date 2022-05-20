
    // WYPISYWANIE ABLICY PETLA 'FOR'
/*
#include <iostream>

using namespace std;

void wypisz_tablice( int tablica[], int ile){
    for ( int index = 0; index < ile; index++ )
        cout << tablica[ index ] << endl;
}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 123;
    dane[ 1 ] = 321;
    dane[ 2 ] = 333;
    dane[ 3 ] = 222;
    dane[ 4 ] = 111;
    wypisz_tablice( dane, 5);

    return 0;
}
*/

    //WYPISYWANIE TABLICY PETLA 'DO...WHILE'

/*
#include <iostream>

using namespace std;

void wypisz_tablice( int tablica[], int ile){
    int index = 0;
    if( index < ile)
    do{
        cout << tablica[ index ] << endl;
        index++;
    }while( index < ile);
    }

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 123;
    dane[ 1 ] = 321;
    dane[ 2 ] = 333;
    dane[ 3 ] = 222;
    dane[ 4 ] = 111;
    wypisz_tablice( dane, 5);

    return 0;
}
*/

    //WCZYTYWNIE LICZB PETLA 'FOR'
/*
#include <iostream>

using namespace std;

void wypisz_tablice( int tablica[], int ile){
    for( int indeks = 0; indeks < ile; indeks++)
        cout << tablica[ indeks ] << endl;
}

void wczytaj_liczby( int tablica[], int ile){
    for( int indeks = 0; indeks < ile; indeks++){
        cout << "Podaj liczbe " << (indeks + 1 ) << ": ";
        cin >> tablica[ indeks ];
    }
}

int main()
{
    int dane[ 5 ];
    wczytaj_liczby(dane, 5);
    wypisz_tablice(dane, 5);

    return 0;
}
*/

    //SUMOWANIE LICZB PETLA 'FOR'
/*
#include <iostream>

using namespace std;

void wypisz_tablice( int tablica[], int ile){
    for( int indeks = 0; indeks < ile; indeks++ )
        cout << tablica[ indeks ] << endl;
}

int sumuj_liczby( int tablica[], int ile ){
    int oblicz = 0;
    for( int indeks = 0; indeks < ile; indeks++ )
        oblicz += tablica[ indeks ];
    return oblicz;
}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 11;
    dane[ 1 ] = 5;
    dane[ 2 ] = 7;
    dane[ 3 ] = 8;
    dane[ 4 ] = 2;
    wypisz_tablice( dane, 5 );

    int wynik = sumuj_liczby( dane, 5);
    cout << "Suma liczb wynosi = " << wynik << endl;

    return 0;
}
*/

    // ZDANIE DOMOWE - sumowanie liczb petla do...while
/*
#include <iostream>

using namespace std;

void wypisz_tablice( int tablica[], int ile){
    int i = 0;
    if( i < ile)
    do{
        cout << tablica[ i ] << endl;
        i++;
    }while( i < ile);
}

int sumuj_tablice( int tablica[], int ile){
    int suma = 0;
    int i = 0;
    if( i < ile);
    do{
        suma +=tablica[ i ];
        i++;
    }while( i < ile);
    return suma;
}

int main()
{
    int dane[ 5 ];
    dane[ 0 ] = 11;
    dane[ 1 ] = 5;
    dane[ 2 ] = 7;
    dane[ 3 ] = 8;
    dane[ 4 ] = 2;

    wypisz_tablice( dane, 5);
    int wynik = sumuj_tablice( dane, 5);
    cout << "Suma liczb wynosi: " << wynik << endl;

    return 0;
}
*/

     // ZDANIE DOMOWE - wypelnij i wypisz 20 elementowa tablice
/*
#include <iostream>

using namespace std;

void put_in_tab( int tab[], int times){
    for( int n = 0; n < times; n++){
        tab[ n ] = ( 1 + n*5);
    }
}

void fill_out_tab( int tab[], int times){
    for( int i = 0; i < times; i++){
        cout << " Liczba " << i + 1 << ". " << tab[ i ] << endl;
    }
}

int main()
{
    int tab[ 20 ];
    put_in_tab( tab, 20);
    fill_out_tab( tab, 20);

    return 0;
}
*/

    // ZADANIE DOMOWE - losowanie z przedzialu 10-30, wypisanie od poczatku i od konca, znajdz najmniejsza i najwieksza

#include <iostream>
#include <time.h>

using namespace std;

void draw_numbers(int tab[], int times){
    srand( time( NULL ) );
    for( int i = 0; i < times; i++){
        tab[ i ] = rand()% 21 + 10;
        //cout << tab[i]<< endl;
    }
}

void show_from_begin( int tab[], int times){
        cout << "Kolejnosc liczb od poczatku: " << endl;
    for( int i = 0; i < times; i++){
        cout << "Liczba " << i + 1 << ". " << tab[ i ] << endl;
    }
}

void show_from_end( int tab[]){
        cout << "\nKolejnosc liczb od konca: " << endl;
    for( int i = 9; i >= 0; i--){
        cout << "Liczba " << i + 1 << ". " << tab[ i ] << endl;
    }
}

int find_min( int tab[], int times){
    int m = tab[ 0 ];
    for( int i = 0; i < times; i++){
        if( tab[ i ] < m){
            m = tab[ i ];
        }
    }
    return m;
}

int find_max( int tab[], int times){
    int m = tab[ 0 ];
    for( int i = 0; i < times; i++){
        if( tab[ i ] > m){
            m = tab[ i ];
        }
    }
    return m;
}

void show_min_and_max( int a, int b){
    cout << "\nNajmniejsza wartosc wynosi: " << a << endl;
    cout << "Najwieksza wartosc wynosi: " << b << endl;
}

int main()
{
    int tab[ 10 ];
    draw_numbers( tab, 10);
    show_from_begin( tab, 10);
    show_from_end( tab);
    int iMin = find_min( tab, 10);
    int iMax = find_max( tab, 10);
    show_min_and_max(iMin, iMax);

    return 0;
}






