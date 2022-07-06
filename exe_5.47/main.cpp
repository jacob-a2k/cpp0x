    // Wywolanie funkcji przez sama siebie
/*
#include <iostream>

using namespace std;

int silnia( int n ){
    if( n <= 1 )
        return 1;

    return n * silnia ( n - 1 );
}

int main()
{
    cout << silnia ( 4 ) << endl;
    return 0;
}
*/


    // Wypisanie liczb od n do 0 i odwrotnie

/*
#include <iostream>

using namespace std;

void test( int n){
    cout << " Malejaco: " << n << '\n';

    if( n > 0 )
        test( n - 1 );

    cout << " Rosnaco: " << n << '\n';
}

int main()
{
    test( 5 );

    return 0;
}
*/

        // Jak NIE OBLICZAC ciagu fibonacciego rekurencyjnie!
/*
#include <iostream>

using namespace std;

unsigned fib( unsigned n ){
    if( n == 0 ) return 0;

    if( n <= 2 ) return 1;

    return fib( n - 1 ) + fib( n - 2 );
}

int main()
{
    cout << fib( 47 );

    return 0;
}
*/


    // Wypisanie liczb malejaco, a nastepnie rosnaco


#include <iostream>

using namespace std;

void test( int n ){
    cout << " M " << n << endl;

    if( n > 0 )
        test( n - 1 );

    cout << " R " << n << endl;
}

int main()
{
    test( 3 );

    return 0;
}




