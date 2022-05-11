    // KILKA 'RETURN' W FUNKCJI
/*
#include <iostream>

using namespace std;

bool czyGodzinaPoprawna( int godz, int min, int sek){
    cout << "Jestem w funkcji czyGodzinaPoprawna " << endl;
    if(godz < 0 || godz > 23)
        return false;

    cout << "Godzina jest poprawna" << endl;
    if( min < 0 || min > 59)
        return false;

    cout << "Godziny i minuty sa poprawne" << endl;
    if(sek < 0 || sek >59 ) return false;

    cout << "Czas jest poprawny" << endl;
    return true;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
*/

    //RETURN ZWRACA PRAWDE LUB FALSZ
/*
#include <iostream>

using namespace std;

bool czyGodzinaPoprawna( int godz, int min, int sek ){
    if( godz < 0 || godz > 23)
        return false;

    if(min < 0 || min > 59)
        return false;

    if( sek < 0 || sek > 59)
        return false;

    return true;
}

void komunikatCzasu( bool bWynik ){
    if( bWynik )
        cout << "Czas jest poprawny" << endl;
    else
        cout << "Czas jest niepoprawny" << endl;
}

int main()
{
    komunikatCzasu(czyGodzinaPoprawna( 24, 30,50));
    komunikatCzasu(czyGodzinaPoprawna( 12, 88, 50));
    komunikatCzasu(czyGodzinaPoprawna( 1, 00, 99));
    komunikatCzasu(czyGodzinaPoprawna( 7, 33, 01));

    return 0;
}
*/

    // RETURN W FUNKCJACH NIEZWRACJACYCH WARTOSCI
/*
#include <iostream>

using namespace std;

void wyswietl( int tablica[], int ile){
    if( ile <= 0 ){
        cout << "Tablica jest pusta." << endl;
        return;
    }//if

    int i = 0;
    do{
        cout << tablica[i] << ", ";
        i++;
    }while( i < ile);

    cout << endl;
}

int dopisz( int iLiczba, int tablica[], int ile ){
    tablica[ ile] = iLiczba;
    ile++;
    return ile; // zwraca ile jest elementow po dodaniu nowego
}

int main()
{
    int liczbaElementow = 0;
    int tablicaLiczb[ 10 ];
    wyswietl(tablicaLiczb, liczbaElementow );

    liczbaElementow = dopisz( 123, tablicaLiczb, liczbaElementow );
    wyswietl( tablicaLiczb, liczbaElementow );

    liczbaElementow = dopisz(321, tablicaLiczb, liczbaElementow );
    wyswietl( tablicaLiczb, liczbaElementow );

    return 0;
}
*/







