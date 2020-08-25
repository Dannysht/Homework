//FMIValut3.cpp
//Daniel Shterev

#include <iostream>
using std::cin ;
using std::cout ;
using std::endl ;
int main()
{
    unsigned short int n, zeroCounter = 0 , med = 0, left = 0 , right = 0 ;
    unsigned int id, idsave ;
    cout << "Please enter n:" ;
    cin >> n ;
    if ( n < 1 || n > 31 )
    {
        cout << "Invalid n" << endl ;
    }
    else
    {
        cout << "Enter ids:" ;
        cin >> id ;
        if (id >= 0)
        {
            cout << 1 << " " ;
            idsave = id ;
        }
        for (int numberOfIds = 1 ; numberOfIds < n ; ++numberOfIds )
        {
            bool checker = false ;
            cin >> id ;
            if ( id >= idsave )
            {
                cout << !checker << " " ;
                ++med ;
            }
            else
            {
                cout << checker << " " ;
                ++zeroCounter ;
                if ( numberOfIds <= n/2 )
                {
                    ++left ;
                }
                else
                {
                    ++right ;
                }
            }
            idsave = id ;
        }
        cout << endl ;
        if ( left < right )
        {
            cout << "Right side:" << zeroCounter << endl ;
        }
        else if ( left > right )
        {
            cout << "Left side:" << zeroCounter << endl ;
        }
        else
        {
            cout << "Both sides:" << zeroCounter << endl ;
        }
    }
    return 0;
}
