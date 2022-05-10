    // DANE TABLICY W FUNKCJACH
/*
#include <iostream>

using namespace std;

void wypelnijTablice( int t[], int iRozmiar ){
    cout << "Podaj " << iRozmiar << " liczb:" << endl;
    int i = 0;
    do{
        cin >> t[ i ];
        i++;
    }while( i < iRozmiar);
}

int main()
{
    int moja_tablica[ 5 ];
    wypelnijTablice( moja_tablica, 5 );
    int i = 0;
    do{
        cout << moja_tablica[ i ] << ", ";
        i++;
    }while( i < 5 );

    return 0;
}
*/

    // ZADANIE DOMOWE - losowanie liczb, przekazywanie tablic za pomoca funkcji

#include <iostream>

using namespace std;

int wylosuj_liczby( int tab[], int a, int b, int c){
    srand( time( NULL ) );
    int i = 0;
    do{
        tab[i] = rand()% (c - b + 1) + b;
        i++;
    }while(i < a);

}

int wypisz_liczby( int tab[], int a){
    int i = 0;
    //int ktora_liczba = 1;
    do{
        //cout << ktora_liczba << ". ";
        cout << tab[ i ] << endl;
        i++;
        //ktora_liczba++;
    }while(i < a);
}

int obliczSume( int tab[], int a){
    int i = 0;
    do{
        int suma = 0;
        suma += tab[i];
        i++;
    }while(i < a);
}

int main()
{
    int tablica[ 999 ];
    wylosuj_liczby( tablica, 999, 4, 10);
    wypisz_liczby( tablica, 999);
    int iSuma = obliczSume( tablica, 999);
    cout << " Suma wynosi: " << iSuma << endl;

    return 0;
}
