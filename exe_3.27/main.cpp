    // WYSZUKIWANIE ZNAKU W TEKSCIE

/*
#include <iostream>
#include <string>

using namespace std;

void szukaj_znaku( string & tekst, char szukany_znak ){
    size_t znaleziona_pozycja = tekst.find( szukany_znak );
    if( znaleziona_pozycja == string::npos )
        cout << "Nie znaleziono znaku w tekscie" << endl;
    else
        cout << "Znak zostal odnaleziony na pozycji " << znaleziona_pozycja << endl;
}

int main()
{
    string nasz_tekst = "Przyklad z kursu C++ (http://cpp0x.pl)";
    szukaj_znaku( nasz_tekst, 'k');

    return 0;
}
*/

    // WYSZUKIWANIE WSZYSTKICH ZNAKOW W TEKSCIE

/*
#include <iostream>
#include <string>

using namespace std;

void szukaj_wszystkich_znakow( string & tekst, char szukany_znak ){
    size_t znaleziona_pozycja = tekst.find( szukany_znak );
    if( znaleziona_pozycja == string::npos ){
        cout << "Nie znaleziono znaku w tekscie" << endl;
        return;
    }
    do{
        cout << "Znak zostal odnaleziony na pozycji " << znaleziona_pozycja << endl;
        znaleziona_pozycja = tekst.find( szukany_znak, znaleziona_pozycja + 1);
    }while( znaleziona_pozycja != string::npos );
}

int main()
{
    string nasz_tekst = "Przyklad z kursu C++ (http://cpp0x.pl)";
    szukaj_wszystkich_znakow( nasz_tekst, 'z');

    return 0;
}
*/


    // WYSZUKIWANIE FRAZY W TEKSCIE

/*
#include <iostream>
#include <string>

using namespace std;

void szukaj_wszystkich_fraz( string & tekst, string szukana_fraza ){
    size_t znaleziona_pozycja = tekst.find( szukana_fraza );
    if(znaleziona_pozycja == string::npos ){
        cout << "Nie znaleziono frazy w tekscie" << endl;
        return;
    }
    do{
        cout << "Fraza zostala odnaleziona na pozycji " << znaleziona_pozycja << endl;
        znaleziona_pozycja = tekst.find( szukana_fraza, znaleziona_pozycja + szukana_fraza.size() );
    }while( znaleziona_pozycja != string::npos );
}

int main()
{
    string nasz_tekst = "Przyklad z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    szukaj_wszystkich_fraz( nasz_tekst, "C++");

    return 0;
}
*/

    // WYSZUKIWANIE FRAZY W TEKSCIE OD KONCA

/*
#include <iostream>
#include <string>


using namespace std;

void szukaj_wszystkich_fraz_od_konca( string & tekst, string szukana_fraza ){
    size_t znaleziona_pozycja = tekst.rfind( szukana_fraza );
    if(znaleziona_pozycja == string::npos ){
        cout << "Nie znaleziono frazy w tekscie" << endl;
        return;
    }
    do{
        cout << "Fraza zostala odnaleziona na pozycji " << znaleziona_pozycja << endl;
        if( znaleziona_pozycja >= szukana_fraza.size() )
            znaleziona_pozycja = tekst.rfind( szukana_fraza, znaleziona_pozycja - szukana_fraza.size() );
        else
            znaleziona_pozycja = string::npos;

    }while( znaleziona_pozycja != string::npos );
}

int main()
{
    string nasz_tekst = "Przyklad z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    szukaj_wszystkich_fraz_od_konca( nasz_tekst, "C++");

    return 0;
}
*/

    // ZADANIE DOMOWE - uzupelnij funkcje

#include <iostream>
#include <string>

using namespace std;

bool szukaj( string & tekst, string wyraz1, string wyraz2 )
{
    size_t znaleziona_jeden = tekst.find( wyraz1);
    size_t znaleziona_dwa = tekst.find( wyraz2 );
    if(( znaleziona_jeden != string::npos) && (znaleziona_dwa != string::npos))
        return true;
    else
        return false;
}

void wypiszWynik( bool czyZnaleziono )
{
    if( czyZnaleziono )
         cout << "Znaleziono" << endl;
    else
         cout << "Nie znaleziono" << endl;

}

int main()
{
    string napis = "Zadanie domowe z kursu C++ (http://cpp0x.pl) - najlepszy kurs C++ w Internecie!";
    wypiszWynik( szukaj( napis, "ada", "kurs" ) );
    wypiszWynik( szukaj( napis, "ada", "taki" ) );
    wypiszWynik( szukaj( napis, "C++", "cpp0x" ) );
    wypiszWynik( szukaj( napis, "C#", "cpp0x" ) );
    return 0;
}



