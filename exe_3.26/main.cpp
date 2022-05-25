    // FUNKCJA GETLINE()
/*
#include <iostream>

using namespace std;

int main()
{
    string tekst;
    getline( cin, tekst);
    cout << "Tekst: " << tekst << endl;

    return 0;
}
*/

    // WCZYTYWANIE TEKSTU CIN, GETLINE()
/*
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
    string imie;
    string nazwisko;
    string o_sobie;
    cout << "Podaj Imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Napisz zdanie o sobie: ";

    cin.ignore(numeric_limits < streamsize > ::max(), '\n');

    getline(cin, o_sobie );
    cout << "Twoje Imie to:" <<  imie << endl;
    cout << "Twoje nazwisko to: " << nazwisko << endl;
    cout << "Napisales o sobie: " << o_sobie << endl;

    return 0;
}
*/

    // ZADANIE DOMOWE - wczytaj imie, nazwisko i wiek 2 osob za pomoca 'CIN'
/*
#include <iostream>
#include <limits>

using namespace std;

void put_person( string & a, string & b, int & c){
    cout << "Podaj dane osoby" << endl;
    cout << " Imie: ";
    cin >> a;
    cout << "Nazwisko: ";
    cin >> b;
    cout << " oraz wiek: ";
    do{
        cin >> c;
        if(cin.fail()){
        cout << "Wprowadz liczbe! ";
        cin.clear();
        cin.ignore( numeric_limits < streamsize > ::max(), '\n');
        cin >> c;
        }
    }while(cin.fail());

}

void print_person( string & a, string & b, int & c){
    cout << " Imie " << a << endl;
    cout << " Nazwisko " << b << endl;
    cout << " Wiek " << c << endl;
}

int main()
{
    string name[2];
    string surname[2];
    int age[2];

    for(int i = 0; i < 2; i++)
        put_person( name[i], surname[i], age[i] );


    for(int i = 0; i < 2; i++)
        print_person( name[i], surname[i], age[i]);

    return 0;
}
*/

    // WCZYTAJ imie, nazwisko i wiek 2 osob funkcja getline()

#include <iostream>
#include <limits>

using namespace std;

void put_person( string & data){
    cout << "Podaj Imie, Nazwisko i Wiek " << endl;
    getline( cin, data);
}

void print_person( string & data){
    cout << "Dane osobowe: " << endl;
    cout << data << endl;
}

int main()
{
    string data[2];

    for(int i = 0; i < 2; i++)
        put_person( data[ i ] );


    for(int i = 0; i < 2; i++)
        print_person( data[ i ] );

    return 0;
}










