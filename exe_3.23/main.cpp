    // SKLEJANIE TEKSTOW
/*
#include <iostream>

using namespace std;

int main()
{
    string napis = "pierwszy";
    napis += " drugi ";
    napis += " trzeci ";
    napis += " czwarty ";
    cout << napis;

    return 0;
}

*/


/*
#include <iostream>

using namespace std;

int main()
{
    string napis;
    napis = "pierwszy";
    napis = napis + " drugi";
     cout << napis;
     return 0;
}
*/

    //WYCZYSZCZENIE TEKSTU W ZMIENNEJ
/*

#include <iostream>

using namespace std;

int main()
{
   // string zmienna = "abc";
   // zmienna = "";

    string zmienna = "abc";
    zmienna.clear();

    return 0;
}
*/

    // ZADANIE DOMOWE - wczytanie 10-ciu wyrazow,a nastepnie wypisanie ich w jednym wierszu

#include <iostream>

using namespace std;

int main()
{
    string writing, letters;
    for( int i = 0; i < 10; i++){
        cin >> writing;
        letters += writing + ", ";
    }
    cout << letters;
    return 0;
}




