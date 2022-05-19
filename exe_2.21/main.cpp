    // LOSOWANIE 5 ROZNYCH LICZB Z PRZEDZIALU OD 1 DO 10
/*
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool czy_byla_wylosowana( int iLiczba, int tab[], int ile){
    if( ile <= 0 )
        return false;

    int i = 0;
    do{
        if( tab[ i ] == iLiczba )
            return true;
        i++;
    }while( i < ile );

    return false;
}

int wylosuj(){
    return ( rand()% 10 ) + 1;
}

int main()
{
    srand( time ( NULL ) );
    int wylosowane[ 5 ];
    int wylosowanych = 0;
    do{
        int liczba = wylosuj();
        if( czy_byla_wylosowana( liczba, wylosowane, wylosowanych ) == false ){
            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;
        } //if
    } while( wylosowanych < 5);

    wylosowanych = 0;
    do{
        cout << wylosowane[ wylosowanych ] << endl;
        wylosowanych++;
    }while( wylosowanych < 5 );

    return 0;
}
*/


    // ZADANIE DOMOWE - 1. wczytanie 3 liczb a nastepnie wylosowanie 2 z nich.
    // ZADANIE DRUGIE - 2. modyfikacja program pierwszego, 10liczb, 8 z nich bez powtorzen

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool already_bet( int a, int tab[], int b){
    if( b <= 0)
        return false;

    int i = 0;
    do{
        if(tab[ i ] == a)
            return true;

        i++;
    }while( i < b);

    return false;
}

void put_in_tab( int tab[], int a){
    cout << "Podaj 10 liczby przynjmniej 8 roznch!" << endl;
    int i = 0;
    do{
        cin >> tab[ i ];
        i++;
    }while( i < a);
}

int main()
{
    int tabs[ 8 ];
    int tab[ 10 ];
    int index = 0;


    put_in_tab( tab, 10);

    do {
        srand( time( NULL ) );
        int number = tab[ rand() % 10];
        if( already_bet( number, tabs, index ) == false){
            tabs[index] = number;
            index++;
        }
    }while( index < 8);

    index = 0;
    do{
        cout << tabs[ index ] << endl;
        index++;
    }while(index < 8);

    return 0;
}



