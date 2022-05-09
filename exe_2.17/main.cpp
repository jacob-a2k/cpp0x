
    // FUNCKJA NIE PRZYJMUJE ARGUMENTOW I NIE ZWTACA WARTOSCI
/*
#include <iostream>

using namespace std;

void moja_funkcja(){
    cout << "[1] - dodawanie" << endl;
    cout << "[2] - odejmowanie" << endl;
    cout << "[0] - wyjscie z programu" << endl;
}

void dodawanie(){
    int L1, L2;
    cout << "Podaj pierwsza liczbe!" << endl;
    cin >> L1;
    cout << "Podaj druga liczbe!" << endl;
    cin >> L2;
    cout << "Suma wynosi: " << L1 + L2 << endl;
}

void odejmowanie(){
    int L1, L2;
    cout << "Podaj pierwsza liczbe!" << endl;
    cin >> L1;
    cout << "Podaj druga liczbe!" << endl;
    cin >> L2;
    cout << "Suma wynosi: " << L1 - L2 << endl;
}

int main()
{
    cout << "W programie sa dostepne nastepujace opcje: " << endl;
    moja_funkcja();
    cout << "Zycze przyjemnego korzystania z programu" << endl;
    int liczba;
    do{
        moja_funkcja();
        cin >> liczba;
        switch( liczba ){
        case 1:
            dodawanie();
            break;
        case 2:
            odejmowanie();
            break;
        default:
            break;
        }
    }while( liczba != 0);

    return 0;
}
*/

    // ODCZYTWANIE WARTOSCI ZWRACANEJ PRZEZ FUNKCJE , KOMUNIKACJA JEDNOSTRONNA
/*
#include <iostream>

using namespace std;

float dodawanie_inne(){
    float a;
    cin >> a;
    float b;
    cin >> b;
    return a + b;
}
int main()
{
    cout << "Wprowadz dwie liczby: ";
    float tu_bedzie_wynik = dodawanie_inne();
    cout << "Wynijk dodawania wynosi: " << tu_bedzie_wynik << endl;

    return 0;
}
*/

    // ZADANIE DOMOWE - funkcja wczytuje liczby i ja zwraca
/*
#include <iostream>
#include <limits>

using namespace std;

int wczytajLiczbe(){
    int a;
    do{
        bool blad = cin.fail();
        if(blad){
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Wprowadz liczbe!" << endl;
        }

    }while(!(cin >> a));
    return a;
}

int main()
{
    cout << "Podaj liczbe: ";
    int liczba = wczytajLiczbe();
    cout << "Podales liczbe: " << liczba << endl;
    return 0;
}
*/

    // MODYFIKACJA KALKULATORA Z WYKORZYSTANIEM FUNKCJI wczytajLiczbe()  z poprzedniego zadania

/*
#include <iostream>
#include <limits>

using namespace std;

int wczytajLiczbe(){
    int a;
    do{
        bool blad = cin.fail();
        if(blad){
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Wprowadz liczbe!" << endl;
        }

    }while(!(cin >> a));
    return a;
}

int main()
{
    cout << " 1.Dodawanie " << endl;
    cout << " 2.Odejmowanie " << endl;
    cout << " 3.Mnozenie " << endl;
    cout << " 4.Dzielenie " << endl;


    cout << "\nPodaj pierwsza wartosc: " << endl;
    int a = wczytajLiczbe();
    cout << "Podaj druga wartosc: " << endl;
    int b = wczytajLiczbe();
    cout << "Wybierz dzialanie matematyczne: " << endl;
    int liczba = wczytajLiczbe();

    switch( liczba )
    {
    case 1:
        cout << " Wynik dodawania wynosi: " << a + b << endl;
        break;
    case 2:
        cout << " Wynik odejmowania wynosi: " << a - b << endl;
        break;
    case 3:
        cout << " Wynik iloczynu wynosi: " << a * b << endl;
        break;
    case 4:
        cout << " Wynik ilorazu wynosi: " << a / b << endl;
        break;
    default:
        cout << " Jak nie umiesz to nie korzystaj z kalkulatora" << endl;
        break;
    }
    return 0;
}
*/

    // FUNKCJA LOSUJE LICZBE Z PRZEDZIALU OD 50 DO 60 WLACZNIE
/*
#include <iostream>

using namespace std;

int lottery(){
    srand( time( NULL) );
    int number = rand()% 11 + 50;
    return number;
}
int main()
{
    cout << lottery() << endl;

    return 0;
}
*/

    // LOSOWANIE LICZB Z PRZEDZIALY PODANEGO ZA POMOCA ARGUMENTOW FUNKCJI       //JESTEM ZAJEBISTY, COS MI W KONCU WYCHODZI ;) // I TAK NIKT NIE PRZECZYTA xD

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int wylosuj(int a, int b){
    return rand()% (b-a + 1) + a;
}

int main()
{
    srand( time( NULL ) );
    int start;
    cin >> start;
    int stop;
    cin >> stop;
    int ile = 20;
    do{
        cout << wylosuj( start, stop ) << endl;
        ile--;
    }while( ile > 0);

    return 0;
}


