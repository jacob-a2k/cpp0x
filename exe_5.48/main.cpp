
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > wektor;

    for( int i = 0; i < 10; ++i ){
        cout << "Rozmiar: " << wektor.size() << " Pojemnosc: " << wektor.capacity() << '\n';
        wektor.push_back( i );
    }
    return 0;
}
*/

    // Zwiekszenie pojemnosci - szybciej dodajemy elementy  -  reserve();
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > wektor;
    wektor.reserve( 10 );
    cout << "Rozmiar: " << wektor.size() << " Pojemnosc: " << wektor.capacity() << '\n';

    return 0;
}
*/

    // Zwiekszenie rozmiaru, skutkuje utworzeniem nowego elementu  -  resize();
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > wektor;
    wektor.resize( 10 );
    cout << "Rozmiar: " << wektor.size() << " Pojemnosc: " << wektor.capacity() << '\n';

    return 0;
}
*/

    // Podbicie pojemnosci, drugi argument funkcji resize(), dostep do elemntu za pomoca kwadratowych nawiasow
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > wektor;

    for( int i = 1; i <= 16; i *= 2)
        wektor.resize( i, i );

    for( int i = 0; i < wektor. size(); ++i )
        cout << wektor[ i ] << ' ';

    return 0;
}
*/

    // Utworzenie zmiennych na iteratory
/*
std::vector < int > ::iterator iter = wektor.begin();
auto iter2 = wektor.begin();
*/


    // Dodawanie elementow - metoda insert(), insert( .begin()), insert( .end())
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > wektor( 10, 0 ); // 10 elementow 0, analogicznie jak resize( 10, 0 )
    wektor.insert( wektor.begin(), 1 ); // Przed pierwszym wiec na poczatek
    wektor.insert( wektor.end(), 3, 2 ); // Przed za - ostatnim, wiec na koniec; 3 elementy o wartosci 2
    wektor.insert( wektor.begin() + 3, 3 ); // Przed elementem o indeksie 3, wiec w miejsce o indeksie 3

    for( int i = 0; i < wektor.size(); ++i )
        cout << wektor[ i ] << ' ';

    return 0;
}
*/

    // Usuwanie elementow - metoda pop_back(), metoda clear() - usuwa wszystkie elementy, metoda erase() - zakres elementow z dowolnego miejsca w wektorze

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > wektor;

    for( int i = 0; i < 10; ++i )
        wektor.push_back( i );

    wektor.erase( wektor.begin() ); // Usun pierwszy element
    wektor.erase( wektor.begin() + 2, wektor.begin() + 4 ); // Usun indeksy 2,3
    wektor.erase( wektor.begin() + 4, wektor.end() ); // Usun od indeksu 4 do konca.

    for( int i = 0; i < wektor.size(); ++i )
            cout << wektor[ i ] << ' ';

    return 0;
}













