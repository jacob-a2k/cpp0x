    // DLUGOSC TEKSTU

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sNapis = "To jest napis";
    cout << "Napis: " << sNapis << endl;
    cout << "Dlugosc napisu to (metoda size): " << sNapis.size() << endl;
    cout << "Dlugosc napisu to (metoda length): " << sNapis.length() << endl;

    return 0;
}
*/

    //LACZENIE TEKSTOW

/*
#include <iostream>

using namespace std;

int main()
{
    string tekst = "abc";
    tekst += "def";
    tekst.append( "ghi" );
    cout << tekst;


    return 0;
}
*/

    //WSTAWIANIE TRESCI W DOWOLNYM MIEJSCU TEKSTU

/*
#include <iostream>

using namespace std;

int main()
{
    string tekst = "abc";
    tekst.insert(1, "def");
    cout << tekst;

    return 0;
}
*/

    //USUWANIE WYBRANEGO FRAGMENTU TEKSTU

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sNapis = "[Kurs C++] std::string - Modyfikowanie tekstu.";
    sNapis.erase(10, 14);
    cout << sNapis << endl;

    return 0;
}
*/


    //KOPIOWANIE TEKSTU

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sNapis = "[Kurs C++] std::string - Kopiowanie tekstu.";
    string sDrugiNapis;
    sDrugiNapis.insert(0,sNapis);
    cout << sDrugiNapis << endl;

    return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sNapis = "[Kurs C++] std::string - Kopiowanie tekstu.";
    string sFragmentTekstu;
    sFragmentTekstu.insert( 0, sNapis, 1, 8 );
    cout << sFragmentTekstu << endl;

    return 0;
}
*/


    // ZADANIE DOMOWE

#include <iostream>
#include <string>

using namespace std;

string konwertuj( string tekst ){
    string wynik;
    int dlugosc = tekst.size();
    for( int i = 0; i < dlugosc;){
        if( tekst[i] == ' ' && tekst[i + 1] == ' '){
            tekst.erase( i, 1);
            dlugosc--;
        }
        else
            i++;
    }
    string napis1 = "<b>";
    string napis2 = "</b>";

    size_t znaleziona1 = tekst.find( napis1 );
    if( znaleziona1 != string::npos)
    do{
        tekst.erase( znaleziona1, napis1.size());
        tekst.insert( znaleziona1, "[b]");
    znaleziona1 = tekst.find(napis1, znaleziona1 + napis1.size());

    }while(znaleziona1 != string::npos);

    size_t znaleziona2 = tekst.find( napis2 );
    if( znaleziona2 != string::npos ){
        tekst.erase( znaleziona2, napis2.size());
        tekst.insert( znaleziona2, "[/b]" );
    }

    wynik = tekst;

    return wynik;
}

int main()
{
    cout << konwertuj( "<b>to jest </b> testowy       napis     <b>:)" ) << endl;
    cout << konwertuj( "  s       a         m      e         sp    a   c j    e" ) << endl;
    cout << konwertuj( "<<B><//b><i></i>" ) << endl;

    return 0;
}







