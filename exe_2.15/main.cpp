        //PRZYKLADOWE ZAPISY PPETLI DO...WHILE
/*
#include <iostream>
int main()
{
    int ile = 4;
    do
    {
        std::cout << "Napis" << std::endl;
        ile--;
    } while( ile > 0 );

    return 0;
}



#include <iostream>
int main()
{
    int ile;

    std::cout << "Ile razy wypisac napis? ";
    std::cin >> ile;
    if( ile > 0 )
    do
    {
        std::cout << "Napis" << std::endl;
        ile--;
    } while( ile > 0 );

    return 0;
}



#include <iostream>
int main()
{
    int ile;

    std::cout << "Ile razy wypisac napis? ";
    std::cin >> ile;
    int pozycja = 1;
    if( ile > 0 )
    do
    {
        std::cout << "Napis nr" << pozycja << std::endl;
        pozycja++;
        ile--;
    } while( ile > 0 );

    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int liczba;
    do{
        cout << "Podaj liczbe 123 aby zakonczyc petle" << endl;
        cin >> liczba;
        cout << "Podales liczbe " << liczba << endl;
    }while( liczba != 123 );

    cout << "Koniec" << endl;

    return 0;
}
*/

    // ZADANIE DOMOWE - program wczytuje i wypisuje liczbe. Zabezpieczenie przed wpisaniem nieprawidlowej liczby
/*
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int liczba;
    bool blad = cin.fail();
    do{
        cout << "Podaj liczbe: " << endl;
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');

    }while(!(cin >> liczba));

    cout << "Twoja liczba to: " << liczba << endl;

    return 0;
}
*/

    // ZADANIE DOMOWE - prosty kalkulator z zabezpieczeniem przed wpisaniem niepoprawnych i liczb i operacji
/*
#include <iostream>
#include <limits>
#include <cstdlib>

using namespace std;

int liczba;
int wybor;
bool blad = cin.fail();

int main()
{

    do{
    cout << "\n 1. Dodawanie" << endl;
    cout << " 2. Odejmowanie" << endl;
    cout << " 3. Mnozenie" << endl;
    cout << " 4. Dzielenie" << endl;
    cout << " 5. Rezygnuj" << endl;

    int wynik = 250;
    cout << "Suma wynosi: " << wynik << endl;

    do{
    cout << "Podaj swoja liczbe: " << endl;
    cin.clear();
    cin.ignore(numeric_limits < streamsize > ::max(), '\n');
    }while(!(cin >> liczba));
    if(liczba != 0){
            do{
                cout << "Ktore dzialanie matematyczne chcesz wykonac ? " << endl;
                cin.clear();
                cin.ignore(numeric_limits < streamsize > ::max(), '\n');
            }while(!(cin >> wybor));
    }
    if(liczba != 0)
    switch(wybor)
    {
    case 1:
        cout << "Wynik dodawania wynosi: " << wynik + liczba << endl;
        break;
    case 2:
        cout << "Wynik odejmowania wynosi: " << wynik - liczba << endl;
        break;
    case 3:
        cout << "Wynik mnozenia wynosi: " << wynik * liczba << endl;
        break;
    case 4:
        cout << "Wynik dzielenia wynosi: " << wynik / liczba << endl;
        break;
    case 5:
        cout << "Koniec operacji matematycznych !" << endl;
        exit(0);

    default:
        cout << "Bledne dane !!!" << endl;
    }
    }while(liczba != 0);
    return 0;
}
*/
