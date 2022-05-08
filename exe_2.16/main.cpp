
    // FUNKCJA LOSUJACA
/*
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Wylosowanie pierwsze: " << rand() << endl;
    int liczba = rand();
    cout << "Wylosowanie drugie: " << liczba << endl;
    liczba = rand();
    cout << "Wylosowanie trzecie: " << liczba << endl;

    return 0;
}
*/

    // KONFIGURCJA MASZYNY LOSUJACEJ
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( time( NULL ) );
    cout << "Wylosowanie pierwsze: " << rand() << endl;
    int liczba = rand();
    cout << "Wylosowanie drugie: " << liczba << endl;
    liczba = rand();
    cout << "Wylosowanie trzecie: " << liczba << endl;

    return 0;
}
*/

    // LOSOWANIE LICZB Z OKRESLONEGO ZAKRESU
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( time( NULL ) );
    cout << "Wylosowanie pierwsze: " << ((rand() % 50 ) + 7 ) << endl;
    int liczba = (rand () % 50 ) + 7;
    cout << "Wylosowanie drugie: " << liczba << endl;
    liczba = ( rand() % 50 ) + 7;
    cout << "Wylosowanie trzecie: " << liczba << endl;
    return 0;
}
*/

    //ZDANIE DOMOWE - ZGADYWANIE POPRAWNEJ LICZBY

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

bool blad = cin.fail();
int shoot;
int many = 0;

int main()
{
    srand( time( NULL) );
    int number = rand() % 1000 + 1;

    cout << "Zgadnij jaka liczbe wylosowalem!" << endl;

    do{
        cin.clear();
        cin.ignore(numeric_limits < streamsize >::max(), '\n');
        cin >> shoot;
        if(shoot == blad){
            cout << "To nie jest liczba!" << endl;
        }
        else if(shoot > number){
            cout << "Za duzo!" << endl;
        }
        else if(shoot < number){
            cout << "Za malo!" << endl;
        }
        many++;

    } while(shoot != number);

    cout << "Gratuluje! Udalo Ci sie trafic wlasciwa liczbe! " << shoot << " Zajelo Ci to: " << many << " prob!" << endl;

    return 0;
}





