    // deklaracja zlozonego typu ( Osoba ), takiego ktory ma jakies skladowe( imie, nazwisko )
/*
struct Osoba{
    string imie, nazwisko;
};


// tworzenie tablicy osob/zmienna

Osoba osoby[ N ], jan;


//do skaldowych dostajemy sie za pomoca kropki( . )
// skladowa dziala jak normalna zmienna, bo jest to zmienna w innej zmiennej

jan.imie = "Jan";
jan.nazwisko = "Kowalski";
osoby[ 0 ].imie = "Adam";


//kropka ma wyzszy priorytetod dereferencji i wydobycie skladowej spod wskaznika wymaga uzycia nawiasuw

Osoba *wsk = &jan;
( *wsk).imie;  // dereferencja na wskazniku kropka na strukturze
wsk->imie; //


// wskaznik na strukture, typ niekompletny

struct Test{
    Test * inny; // - nie wiadomo ile trzeba zarezerwowac pamieci
};


// deklaracja 'struct' i pozniejsze 'skompletowanie'

struct A;

struct B{
    A * a; // A jest znane (niekompletne)
};

struct A{
    B * b; // B jest znane ( kompletne )
};


// tworzenie zmiennych tego samego typu zaraz po zdefiniowaniu struktury

struct Test{
    int a;
} zmienna, zmienna2, *wskaznik, tablica[ 10 ];
Test zmienna, zmienna2, *wskaznik, tablica[ 10 ]; // Rownowazne
struct Test zmienna, zmienna2, *wskaznik, tablica[ 10 ]; // Rownowazne

*/


    // LISTA JEDNOKIERUNKOWA - struktura danych
/*
#include <iostream>

using namespace std;

struct Lista{
    Lista * ogon;
    int liczba;
};

// Wypisz wszystkie elementy listy
void wypisz( Lista * lista ){
    // Przechodzenie po liscie *rekurencyjnie*
    if( lista ){
        cout << lista->liczba << ", ";
        wypisz( lista->ogon );
    }
}

// Zwroc: wskaznik na ostatni element listy
Lista * ostatni( Lista * lista ){
    // Przechodzenie po liscie *iteracyjnie*
    if( lista )
    while( lista->ogon )
        lista = lista->ogon;

    return lista;
}

// Dodaj element na koniec listy
void dodajKoniec( Lista *& lista, int liczba ){
    // Tworzymy nowy element listy
    Lista * nowy = new Lista;
    nowy->liczba = liczba;
    nowy->ogon = nullptr;

    // Dopisujemy na koniec
    if( lista )
        ostatni( lista )->ogon = nowy;
    else lista = nowy;
}

// Usuwasz liste
void zniszcz( Lista *& lista ){
    while( lista ){
        Lista * tmp = lista;
        lista = lista->ogon;
        delete tmp;
    }
    lista = nullptr;
}


int main()
{
    int liczba;
    Lista * lista = nullptr;
    cout << "Podaj liczby, 0 lub bad konczy:\n";

    while( cin >> liczba && liczba )
        dodajKoniec( lista, liczba );

    cout << "Koniec, oto liczby:\n";
    wypisz( lista );
    zniszcz( lista );


    return 0;
}
*/

    // ZDANIE DOMOWE - napisz funkcje dodajPoczatek(), uzyj zamiast dodajKoniec() - z neta :/


#include <iostream>

using namespace std;

struct Lista{
    Lista * ogon;
    int liczba;
};

// Wypisz wszystkie elementy listy
void wypisz( Lista * lista ){
    // Przechodzenie po liscie *rekurencyjnie*
    if( lista ){
        cout << lista->liczba << ", ";
        wypisz( lista->ogon );
    }
}

// Zwroc: wskaznik na ostatni element listy
Lista * ostatni( Lista * lista ){
    // Przechodzenie po liscie *iteracyjnie*
    if( lista )
    while( lista->ogon )
        lista = lista->ogon;

    return lista;
}

// Dodaj element na poczatek listy
void dodajPoczatek( Lista *& lista, int liczba ){
    // Tworzymy nowy element listy
    Lista * nowy = new Lista;
    nowy->liczba = liczba;
    if( lista == 0 )
        nowy->ogon = 0;
    else
        nowy->ogon = lista;
    lista = nowy;
}

// Usuwasz liste
void zniszcz( Lista *& lista ){
    while( lista ){
        Lista * tmp = lista;
        lista = lista->ogon;
        delete tmp;
    }
    lista = nullptr;
}


int main()
{
    int liczba;
    Lista * lista = nullptr;
    cout << "Podaj liczby, 0 lub bad konczy:\n";

    while( cin >> liczba && liczba )
        dodajPoczatek( lista, liczba );

    cout << "Koniec, oto liczby:\n";
    wypisz( lista );
    zniszcz( lista );


    return 0;
}


