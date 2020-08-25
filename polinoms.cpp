//  Daniel Shterev
//  Polinoms.cpp


#include <iostream>
using std::cout ;
using std::cin ;
using std::endl ;
int MAX_ARRAY_SIZE = 1000 ;
int main()
{
    int polinom [MAX_ARRAY_SIZE], N, differential = 0 ;
    cin >> N ;
    for (int j = 0 ; j <= N ; ++j )
    {
        cin >> polinom [j] ;
    }
    int exponent = N , exponentprime = exponent - 1 ;
    cin >> differential ;
    if ( differential > N )
    {
        cout << 0 ;
    }
    for (int k = 0 ; k <= N-differential ; ++k)
    {
        polinom[k] = ( polinom[k] * exponent ) ;
        exponentprime = exponent - 1 ;
        for (int l = 1; l < differential ; ++l)
        {
            polinom[k] = ( polinom[k] * exponentprime ) ;
            --exponentprime ;
        }
        --exponent ;
        if (exponentprime > 1 && N != differential && polinom[k] != 0 )
        {
            cout << polinom[k] << "*X^" << exponentprime << " + ";
        }
        if ( exponentprime == 1 && N!= differential && polinom[k] != 0 && polinom[k+1] != 0 )
        {
            cout << polinom[k] << "*X" << " + " ;
        }
        if ( exponentprime == 0 && N!= differential && polinom[k] != 0)
        {
            cout << polinom[k] << endl ;
        }
    }
    return 0;
}
