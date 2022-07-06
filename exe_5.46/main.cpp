// Zwykly wskaznik
// Znajpierw zwalniamy, a potem zwracamy
/*
int * funkcja( int rozmiar ){
    int * tab = new int[ rozmiar ];

    if( f1( tab, rozmiar ) )
    if( f2( tab, rozmiar ) )
        return tab;

    delete[] tab;
    return nullptr;
}


    // Wskaznik unique_ptr<> - jedyne odniesienie

#incude <memory>
std::unique_ptr < int > uptr; // pusty wskaznik

std::unique_ptr < int > uptr( new int ); // wskaznik zarzadza jakas pamiecia - 'jawnie'


// przyklad

int * funkcja( int rozmiar ){
    unique_ptr < int[] > tab( new int [ rozmiar ] );

    if( !f1( tab.get(), rozmiar ) )
        return nullptr;

    if( !f2( tab.get(), rozmiar ) )
        return unique_ptr;

    return tab.release();
}
*/

    // wskaznik - shared_ptr<> - wspoldzielony
/*
#include <iostream>
#include <memory>

int main()
{
   std::shared_ptr < int > sptr( new int );
    std::shared_ptr < int > sptr2;

    std::cout << "sptr: " << sptr.use_count() << " sptr2: " << sptr2.use_count() << '\n';
    sptr2 = sptr;
    std::cout << "sptr: " << sptr.use_count() << " sptr2: " << sptr2.use_count() << '\n';

{
    std::shared_ptr < int > sptr3 = sptr2;
    std::cout << "sptr: " << sptr.use_count() << " sptr2: " << sptr2.use_count() << '\n';
}

std::cout << "sptr: " << sptr.use_count() << " sptr2: " << sptr2.use_count() << '\n';

 return 0;
}
*/


    // Wskaznik weak_ptr<>
/*
#include <iostream>

using namespace std;

struct Lista
{
    int liczba;
    shared_ptr < Lista > nastepny, poprzedni;
    Lista * poprzedni; // zwykly wskaznik ?
    weak_ptr < Lista > poprzedni;
};

int main()
{


    return 0;
}
*/

    //  metoda - sprawdzanie czy zrzadzana pamiec zostala juz zwolniona
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    weak_ptr < int > weak;
    cout << "expired: " << weak.expired() << "; address: " << weak.lock() << '\n';

    {
        shared_ptr < int > strong( new int );
        weak = strong;
        cout << "expired: " << weak.expired() << "; address: " << weak.lock() << '\n';
    }
    cout << "expired: " << weak.expired() << "; address: " << weak.lock() << '\n';

    return 0;
}






















