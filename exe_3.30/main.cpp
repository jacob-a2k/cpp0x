    // ZAGNIEZDZENIE PETLI
/*
#include <iostream>

using namespace std;

void wypiszJeden ( int a ){
    cout << "x = " << a << "; ";
    cout << endl;
}

void wypiszDwa( int a, int b ){
    cout << "y = " << b << "; ";
    cout << "{ ";
    cout << "x = " << a << "; ";
    cout << "} " << endl;
}

void wypiszTrzy( int a, int b , int c ){
    cout << "z = " << c << "; ";
    cout << "{ ";
    cout << "x = " << a << "; ";
    cout << "y = " << b << "; ";
    cout << "}" << std::endl;
}

int main()
{
    for( int x = 4; x <= 7; x += 3 ){
        wypiszJeden( x );
        for( int y = 3; y <= 7; y += 2){
            wypiszDwa( x, y );
            for(int z = 1; z <=3; z += 1)
                wypiszTrzy( x, y, z );
        }
    }

    return 0;
}
*/

    // ZAGNIEZDZONE PETLE - zmienne
/*
#include <iostream>

using namespace std;

int main()
{
    for( int pierwszaZmienna = 1; pierwszaZmienna <= 10; ++pierwszaZmienna ){
        for( int x = 1; x <= pierwszaZmienna; ++x)
            cout << "*";

        cout << endl;
    }
    return 0;
}
*/

    // ZADANIE DOMOWE - mozliwe opcje zapelniania  5 pudelek trzema liczbami
/*
#include <iostream>

using namespace std;

void fill_out( int a, int b, int c, int d, int e ){
    cout << a << " ";
    cout << b << " ";
    cout << c << " ";
    cout << d << " ";
    cout << e << " ";

    cout << endl;
}

int main()
{
    for( int a = 1; a <=3; ++a){
        for( int b = 1; b <= 3; ++b){
            for( int c = 1; c <= 3; ++c){
                for( int d = 1; d <= 3; ++d){
                    for( int e = 1; e <= 3; ++e){
                        fill_out( a, b, c, d, e, f);
                    }
                }
            }
        }

    }
    return 0;
}
*/

    // ZADANIE DOMOWE - losowanie 3 z 5 pilek
/*
#include <iostream>

using namespace std;

void fill_out( int a, int b, int c){
    cout << a << " ";
    cout << b << " ";
    cout << c << " ";
    cout << endl;
}

int main()
{
    for( int a = 1; a <=5; ++a){
        for( int b = a + 1; b <= 5; ++b){
            for( int c = b +1; c <= 5; ++c){
                fill_out( a, b, c);
            }
        }

    }
    return 0;
}
*/


    // ZADANIE DOMOWE - program liczy ilosc mozliwych kombinacji wylosowanie 6 liczb ze zbioru 49liczb

/*
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    for( int p1 = 1; p1 < 50; ++p1 )
    {
        for( int p2 = p1 + 1; p2 < 50; ++p2 )
        {
            for( int p3 = p2 + 1; p3 < 50; ++p3 )
            {
                for( int p4 = p3 + 1; p4 < 50; ++p4 )
                {
                    for( int p5 = p4 + 1; p5 < 50; ++p5 )
                    {
                        for( int p6 = p5 + 1; p6 < 50; ++p6 )
                        {
                            //cout << p1 << "," << p2 << "," << p3 << "," << p4 << "," << p5 << "," << p6 << endl;
                            i++;
                        }

                    }
                }
            }
        }
    }
    cout << i;


    return 0;
}
*/


    NIE JESTEM ZADOWOLONY :/  2 ZADANIA ZNALAZLEM NA INTERNECIE NIE POSZLO MI, ALE ZROBILEM DOKLADNA ANALIZE TYCH ROZWIAZAN


