    //PETLA A SLOWO KLUCZOWE -- BREAK
/*
#include <iostream>

using namespace std;

int main()
{
    for( int x = 0; x < 10; x++){
        if( x == 7 ){
            cout << " Teraz 'x' wynosi: " << x << "." << endl;
            cout << " Przerywam petle! " << endl;
            break;
        }
        cout << " x = " << x << endl;
    }
    cout << "Teraz jestem tu :)" << endl;

    return 0;
}
*/

    // PETLA A SLOWO KLUCZOWE -- CONTINUE

/*
#include <iostream>

using namespace std;

int main()
{
    for( int x = 0; x < 8; x++){
        cout << "x = " << x << endl;
        if( x == 2 || x ==3 || x == 5 ){
            cout << "Teraz 'x' wynosi " << x;
            cout << " - wywoluje continue! " << endl;
            continue;
        }
    cout << "KONIEC kroku x = " << x << endl;
    }
    return 0;
}
*/

    // PRZYKLAD ZASTOSOWANIA SLOWA CONTINUE

/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wypisz( int tablica[], int rozmiar ){
    cout << "Liczby w tablicy: " << endl;
    for( int i = 0; i < rozmiar; i++)
        cout << tablica[i] << ", ";

    cout << endl;
}

void wykonajZadanie( int tablica[], int rozmiar ){
    cout << "Wykonaj zadanie: " << endl;
    int iSumaWszystkich = 0;
    int iSumaWypisanych = 0;
    for( int i = 0; i < rozmiar; i++ ){
        iSumaWszystkich += tablica[i];
        if( tablica[i] % 2 != 0)
            continue;

        cout << tablica[i] << ", ";
        iSumaWypisanych += tablica[i];
    }
    cout << endl;
    cout << "Suma wszystkich: " << iSumaWszystkich << endl;
    cout << "Suma wypisanych: " << iSumaWypisanych << endl;
}

int main()
{
    srand( time( NULL ) );
    int tab[10];
    for( int i = 0; i < 10; i++ )
        tab[i] = rand() % 100;

    wypisz( tab, 10 );
    wykonajZadanie( tab, 10);


    return 0;
}
*/

    // ZADANIE DOMOWE - modyfikacja programow

// 1.
/*
#include <iostream>

using namespace std;

int main()
{
    for( int x = 0; x < 10; x++ ){
            cout << "x = " << x << endl;
    if( x == 6){
        cout << "Teraz 'x' wynosi " << x + 1 << endl;
        cout << "Teraz jestem tu :) " << endl;
        return 0;
    }
    }
    return 0;
}
*/

// 1.
/*
#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    do{
        cout << "x = " << x << endl;
        x++;
    }while( x != 7);
    cout << "Teraz 'x' wynosi 7 " << endl;
    cout << "Koniec petli! " << endl;
    cout << "Teraz jestem tu :)" << endl;

    return 0;
}
*/

// 2.
/*
#include <iostream>

using namespace std;

int main()
{
    for( int x = 0; x < 8; x++ )
    {
        std::cout << "x = " << x << std::endl;
        if( x != 2 && x != 3 && x != 5)
            cout << "KONIEC kroku x = " << x << endl;

        if( x == 2 || x == 3 || x == 5 )
        {
            std::cout << "Teraz 'x' wynosi " << x;
            std::cout << " - wywoluje continue!" << std::endl;
        }
    }
    return 0;
}
*/


