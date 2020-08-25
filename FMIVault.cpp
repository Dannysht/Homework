
//  FMIVault.cpp
// Daniel Shterev

#include <iostream>
using namespace std ;
int main()
{
    unsigned int a, b, c, d, e, f, g, h, i, j = 0 ;
    cin >> a ;
    b = a / 100000000 ; // card version
    c = ( a / 1000000 ) % 10 ; // owner spec
    d = ( a % 1000000 ) / 10 ; // owner_id
    e = d / 10000 ; // first element of owner id
    f = ( d / 1000 ) % 10 ; // second element of owner id
    g = ( d / 100 ) % 10 ; // third element of owner id
    h = ( d / 10 ) % 10 ; // foruth element of owner id
    i = d % 10 ; // fifth element of owner id
    if ( e == 0 && e == f ) //checks if first element is 0 and if it is equal to second element
    {
        j++;
    }
    if ( e == 0 && e == g ) //checks if first element is 0 and if it is equal to third element
    {
        j++;
    }
    if ( e == 0 && e == h ) //checks if first element is 0 and if it is equal to fourth element
    {
        j++;
    }
    if ( e == 0 && e == i ) //checks if first element is 0 and if it is equal to fifth element
    {
        j++;
    }
    if ( f == 0 && f == g ) //checks if second element is 0 and if it is equal to third element
    {
        j++;
    }
    if ( f == 0 && f == h ) //checks if second element is 0 and if it is equal to fourth element
    {
        j++;
    }
    if ( f == 0 && f == i ) //checks if third element is 0 and if it is equal to fifth element
    {
        j++;
    }
    if ( g == 0 && g == h ) //checks if third element is 0 and if it is equal to fourth element
    {
        j++;
    }
    if ( g == 0 && g == i ) //checks if third element is 0 and if it is equal to fifth element
    {
        j++;
    }
    if ( h == 0 && h == i ) //checks if fourth element is 0 and if it is equal to fifth element
    {
        j++;
    }
    if ( j >= 1 ) // checks if there is more than 1 element that is equal to 0
    {
        cout << "Invalid card number" << endl ;
        return 0 ;
    }
    else
    {
        cout << "{ “card_version”: " << b ;
        switch ( c ) // checks every option for owner_spec
        {
            case 0:
            {
                cout << ", “owner_spec”: “Informatics”, “owner_id”: " << d << " }" << endl ;
                return 0;
            }
            case 1:
            {
                cout << ", “owner_spec”: “Computer science”, “owner_id”: " << d << " }" ;
                cout << endl ;
                return 0;
            }
            case 2:
            {
                cout << ", “owner_spec”: “Informational systems”, “owner_id”: " << d << " }" ;
                cout << endl ;
                return 0;
            }
            case 3:
            {
                cout << ", “owner_spec”: “Software engineering”, “owner_id”: " << d << " }" ;
                cout << endl ;
                return 0;
            }
            case 4:
            {
                cout << ", “owner_spec”: “Applied mathematics”, “owner_id”: " << d << " }" ;
                cout << endl ;
                return 0;
            }
            case 5:
            {
                cout << ", “owner_spec”: “Mathematics”, “owner_id”: " << d << " }" << endl ;
                return 0;
            }
            case 6:
            {
                cout << ", “owner_spec”: “Statistics”, “owner_id”: " << d << " }" << endl ;
                return 0;
            }
            case 8:
            {
                cout << ", “owner_spec”: “Mathematics and Informatics”, “owner_id”: " ;
                cout << d << " }" << endl ;
                return 0;
            }
        }
    }
}
