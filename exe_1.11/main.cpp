//Operacja porownania

/*
#include <iostream>

using namespace std;

int main()
{
    bool porownanie = 123 >= 321;

    cout << "porownanie = " << porownanie << endl;
    cout << "porownanie = " << ( 111 != 222 ) << endl;
    cout << "porownanie = " << ( 777 == 777 ) << endl;
    cout << "porownanie = " << ( 777 < 777 ) << endl;
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int zmienna = 5;
    bool popatrzNaTo = 10 * 4 + zmienna / 2 <= zmienna * 8;
    cout << " popatrzNaTo = " << popatrzNaTo << endl;

    return 0;
}
*/
    // Prawda. Falsz,

/*
#include <iostream>

using namespace std;

int main()
{
    bool eksperymentujemy = 12312;
    cout << "eksperymentujemy = " << eksperymentujemy << endl;

    eksperymentujemy = 0;
    cout << "eksperymentujemy = " << eksperymentujemy << endl;

    eksperymentujemy = -123.0;
    cout << "eksperymentujemy = " << eksperymentujemy <<endl;

    return 0;
}
*/

        // Blad operacji porownania. Uzycie przypisania

/*
#include <iostream>

using namespace std;

int main()
{
    int xyz = 321;
    bool wynik = xyz = 123;
    cout << "xyz = " << xyz << endl;
    cout << "wynik = " << wynik << endl;

    return 0;
}
*/

// ZADANIE DOMOWE - program wykorzystujacy wielokrotne przypisanie

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    a = 10;
    b = a;
    d = c = b;
    cout << d;

    return 0;
}




