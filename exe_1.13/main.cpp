    // INSTRUKCJA I BLOK INSTRUKCJI-{}
/*
#include <iostream>

using namespace std;

int main()
{
    int wiek;
    cin >> wiek;
    if(wiek >= 18){
        cout << "Twierdzisz ze jestes pelnoletni ;)" << endl;
        cout << "ale czy kogos to interesuje? " << endl;
    }
    cout << "Koniec" << endl;

    return 0;
}
*/

    //ZAGNIEZDZANIE WARUNKOW
/*
#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cin >> liczba;
    if( liczba >= 10){
        cout << "Liczba jest >= 10" << endl;
        if(liczba >= 50){
            cout << "Liczba jest >= 50" << endl;
            if(liczba <= 100)
            cout << "Liczba jest <= 100" << endl;
        }
    }
    cout << "Koniec" << endl;
    return 0;
}
*/

    // DZIALANIE ISTRUKCJI WARUNKOWEJ IF...ELSE...
/*
#include <iostream>

using namespace std;

int main()
{
    int wiek;
    cout << "Podaj swoj wiek: " << endl;
    cin >> wiek;
    if(wiek >= 18){
        cout << "Jestes pelnoletni." << endl;
    }
    else{
        cout << "Nie jestes pelnoletni." << endl;
    }
    cout << "Koniec" << endl;

    return 0;
}
*/

    // PRACA DOMOWA - analiza programu, instrukcja warunkowa w jednej lini,
/*
#include <iostream>

using namespace std;

int main()
{
    int wiek;
    cin >> wiek;
    if(wiek >= 18 && wiek <=100)
    {
        cout << "Twierdzisz, ze jestes pelnoletni... " << endl;
        cout << "ale czy kogos to interesuje? :)" << endl;
    }
    cout << "Koniec" << endl;
    return 0;
}
*/

    // PRACA DOMOWA - usuwanie bledow z programu

#include <iostream>

using namespace std;

int main()
{
    int wiek;
    cin >> wiek;

    if(wiek < 18){
        cout << "Nie jestes pelnoletni " << endl;
    }
    else {
        cout << "Jestes pelnoletni " << endl;
    }
    cout << "Koniec" << endl;

    return 0;
}
