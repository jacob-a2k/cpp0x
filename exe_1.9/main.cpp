// Obsluga strumienia wejsciowego. Poprawnosc danych.

/*
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int liczba;
    std::cin >> liczba;
    bool bCzyBlad = std::cin.fail();
    cin.clear();
    cin.ignore(numeric_limits < streamsize >::max(), '\n' );

    int a;
    float b;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    cout << "Czy cos nawalilo? " << cin.fail() << endl;

    cout << "Podaj liczbe rzeczywista: ";
    cin >> b;
    cout << "Czy cos nawalilo? " << cin.fail() << endl;

    cout << "Liczba a = " << a << endl;
    cout << "Liczba b = " << b << endl;
    return 0;
}
*/

//Wczytanie i wypisanie trzech liczb reczywistych. Czyszczenie bufora strumienia. Czy wczytanie liczby sie powiodlo.

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    float a;
    cin >> a;

    bool bCzyBlad = cin.fail();

    cout << "Liczba pierwsza to: " << a << ". Blad " << cin.fail() << endl;

    cin.clear();
    cin.ignore( numeric_limits < streamsize > ::max(), '\n');

    float b;
    cin >> b;

    cout << "Liczba druga to: " << b << ". Blad " << cin.fail() << endl;

    cin.clear();
    cin.ignore( numeric_limits < streamsize > ::max(), '\n');

    float c;
    cin >> c;

    cout << "Liczba trzecia to: " << c << ". Blad " << cin.fail() << endl;

    cin.clear();
    cin.ignore( numeric_limits < streamsize > ::max(), '\n');

    return 0;
}
