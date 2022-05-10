    // KORZYSTANIE ZE ZMIENNYCH TABLICOWYCH
/*
#include <iostream>

using namespace std;

int main()
{
    int liczby[ 3 ];
    cout << "Podaj liczbe 1: ";
    cin >> liczby[ 0 ];
    cout << "Podaj liczbe 2: ";
    cin >> liczby[ 1 ];
    liczby[ 2 ] = 567;
    cout << "liczby[2] wynosi " << liczby[ 2 ]<< endl;
    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
    cout << "Suma trzech liczb wynosi: " << suma << endl;

    return 0;
}
*/

    // TABLICA I PETLA DO..WHILE
/*
#include <iostream>

using namespace std;

int main()
{
    int liczba[ 10 ];
    int licznik = 0;
    do{
        cin >> liczba[ licznik ];
        licznik++;
    }while( licznik < 10);

    cout << "Podales nastepujace liczby: ";
    licznik = 0;
    do{
        cout << liczba[ licznik ] << ",";
        licznik++;
    }   while(licznik < 10);

    return 0;
}
*/

    // ZADANIE DOMOWE - losowanie oraz sumowanie 999 liczb z zkresu od 4 do 10

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int tab[999];
    int counter = 0;
    int draw;
    int total = 0;
    //int pointer = 1;
    cout << "Wylosowane liczby: " << endl;

    srand( time( NULL ) );
    do{
        tab[counter] = rand()% 7 + 4;
        //cout << pointer << ". ";
        cout << tab[counter] << endl;
        total += tab[counter];
        counter++;
        //pointer++;
    }while(counter < 999);

    cout << endl;
    cout << "Suma wszystkich liczb to: " << total << endl;

    return 0;
}




