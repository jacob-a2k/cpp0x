
    // Standardowe algorytmy
/*
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;

int losowanie(){
    return rand() % 100;
}
int modyfikacja( int x){
    return 2 * x  + 1;
}

int main()
{
    srand( time( nullptr ) );
;
    vector < int > wektor;
    generate_n( back_inserter(wektor ), 10, losowanie);
    std::copy( wektor.begin(), wektor.end(), std::ostream_iterator < int >( std::cout, ", " ) );
    cout << '\n';
    transform( wektor.begin(), wektor.end(), wektor.begin(), modyfikacja );
    std::copy( wektor.begin(), wektor.end(), std::ostream_iterator < int >( std::cout, ", " ) );
    cout << '\n';
    sort( wektor.begin(), wektor.end() );
    std::copy( wektor.begin(), wektor.end(), std::ostream_iterator < int >( std::cout, ", " ) );
    cout << '\n';
    cout << "Suma : " << accumulate(wektor.begin(), wektor.end(), 0) << '\n';
    return 0;
}
*/

    // Sortowanie z nietypowym kryterium

#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int losowanie(){
    return rand() % 100;
}

//Malejaco, najpierw parzyste, potem nieparzyste
bool predykat( int l, int r ){
    //Parzystosc
    int l_par = l % 2, r_par = r % 2;

    if( l_par != r_par )
    // L ma poprzedzac R, jesli jest parzyste, a R nie (wynika z if)
        return l_par == 0;

    // L ma poprzedzac R, jesli jest wieksze ( sortowanie rosnaco )
    return l > r;
}

int main()
{
    srand( time( nullptr ) );

    vector < int > wektor;
    generate_n( back_inserter( wektor ), 10, losowanie );
    sort( wektor.begin(), wektor.end(), predykat );
    copy( wektor.begin(), wektor.end(), ostream_iterator < int > (std::cout, ", " ) );

    return 0;
}

