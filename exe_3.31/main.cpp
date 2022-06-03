    // PRZYKLAD PETLI WHILE
/*
#include <iostream>

using namespace std;

void odliczanie( int iStart){
    while( iStart >= 0){
        cout << iStart << ", ";
        --iStart;
    }
    cout << "Boom! :)" << endl;
}

int main()
{
    odliczanie( 10 );
    odliczanie( -100 );
    odliczanie( 5 );

    return 0;
}
*/

    // ZADANIE DOMOWE - modyfikacja funkcji na petle for

#include <iostream>

using namespace std;

void zakres( int x, int y){

    while( x <= y){

        cout << x << ", ";
        ++x;
    }
    cout << "koniec" << endl;
}

using namespace std;

int main()
{
    zakres( 1, 5);
    zakres( 8, -1 );
    zakres( 10, 10);

    return 0;
}
