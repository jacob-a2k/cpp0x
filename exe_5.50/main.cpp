    // Kontener set<> - dodawanie elementow metoda insert()
/*
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int dane[ 10 ] = {1,9,2,3,1,4,6,5,5,8 };
    set < int > zbior;

    //pojedynczo
    for( int i = 0; i < 10; ++i )
        zbior.insert( dane[ i ] );

    // lub wszystkie naraz (para iteratorow)
    zbior.insert( dane, dane + 10);

    // 'std::set<int>::iterator' zamiast 'auto', przed C++11
    for( auto iter = zbior.begin(); iter != zbior.end(); ++iter )
        cout << * iter << ' ';

    return 0;
}
*/

    // Kontener set<> , metoda count();
/*
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set < int > zbior;
    int liczba;

    cout << "Podaj liczby, bez duplliktow\n";

    while( cin >> liczba ){
        if( zbior.count( liczba ) > 0 )
        // lub
        //if( zbior.find( liczba ) != zbior.end() )
            cout << "Juz podales " << liczba << "!\n";
        else
            zbior.insert( liczba );
    }

    return 0;
}
*/

    // Kontener map<>
/*
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map < int, int > mapa;
    int liczba;

    cout << "Podaj liczby, bez duplikatow\n";

    while( cin >> liczba ){
        int powt = ++mapa[ liczba ];

        if( powt > 1 )
            cout << "Podales " << liczba << " juz " << powt << " razy!\n";
    }


    return 0;
}
*/

    // Wskazowki do optymalnego kodu

#include <iostream>
#include <map>

using namespace std;

struct Struktura
{
    int a, b, c;
};

int main()
{

    map < int, Struktura > mapa;
    /*
    mapa[ 1 ].a = 3;        // tak nie nalezy pisac, gdyz ten kod wyszukuje element 3 razy zamiast 1 raz
    apa[ 1 ].b = 1000;
    [ 1 ].c = 0;
    */

    Struktura & element = mapa[ 1 ]; // element wyszukujemy tylko 1 raz i zachowywujemy referencje na element
    element.a = 3;
    element.b = 1000;
    element.c = 0;

    return 0;
}







