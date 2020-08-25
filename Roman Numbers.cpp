//
//  main.cpp
//  Roman numbers
//
//  Created by Daniel Shterev on 30.10.19.
//  Copyright © 2019 Daniel Shterev. All rights reserved.
//

#include <iostream>
using std::cout ;
using std::cin ;
using std::endl ;
int main()
{
    short unsigned int number ;
    cin >> number ;
    while (number > 3000 || number < 0)
    {
        cout << "Invalid number" ;
        cout << "Number should be between 0 and 3000" ;
        cin >> number ;
    }
    if ( number >= 1000 )
    {
       short unsigned int thousands = number / 1000 ;
        if (thousands == 1 )
        {
            cout << "M" ;
        }
        else if ( thousands == 2 )
        {
            cout << "MM" ;
        }
        else
        {
            cout << "MMM" ;
        }
        short unsigned int hundreds = ( number / 100 ) % 10 ;
        switch ( hundreds )
        {
            case 0 :
            {
                cout << "" ;
                break ;
            }
            case 1 :
            {
                cout << "C" ;
                break ;
            }
            case 2 :
            {
                cout << "CC" ;
                break ;
            }
            case 3 :
            {
                cout << "CCC" ;
                break ;
            }
            case 4 :
            {
                cout << "CD" ;
                break ;
            }
            case 5 :
            {
                cout << "D" ;
                break ;
            }
            case 6 :
            {
                cout << "DC" ;
                break ;
            }
            case 7 :
            {
                cout << "DCC" ;
                break ;
            }
            case 8:
            {
                cout << "DCCC" ;
                break ;
            }
            case 9:
            {
                cout << "CM" ;
                break ;
            }
        }
        short unsigned int tens = ( number / 10 ) % 10  ;
        switch ( tens )
        {
            case 0 :
            {
                cout << "" ;
                break ;
            }
            case 1 :
            {
                cout << "X" ;
                break ;
            }
            case 2 :
            {
                cout << "XX" ;
                break ;
            }
            case 3 :
            {
                cout << "XXX" ;
                break ;
            }
            case 4 :
            {
                cout << "XL" ;
                break ;
            }
            case 5 :
            {
                cout << "L" ;
                break ;
            }
            case 6 :
            {
                cout << "LX" ;
                break ;
            }
            case 7 :
            {
                cout << "LXX" ;
                break ;
            }
            case 8:
            {
                cout << "LXXX" ;
                break ;
            }
            case 9:
            {
                cout << "XC" ;
                break ;
            }
        }
        short unsigned int units = number % 10 ;
        switch ( units )
        {
            case 0 :
            {
                cout << "" ;
                break ;
            }
            case 1 :
            {
                cout << "I" << endl ;
                break ;
            }
            case 2 :
            {
                cout << "II" << endl ;
                break ;
            }
            case 3 :
            {
                cout << "III" << endl ;
                break ;
            }
            case 4 :
            {
                cout << "IV" << endl ;
                break ;
            }
            case 5 :
            {
                cout << "V" << endl ;
                break ;
            }
            case 6 :
            {
                cout << "VI" << endl ;
                break ;
            }
            case 7 :
            {
                cout << "VII" << endl ;
                break ;
            }
            case 8:
            {
                cout << "VIII" << endl ;
                break ;
            }
            case 9:
            {
                cout << "IX" << endl ;
                break ;
            }
        }
    }
    if ( number >= 100 && number <= 999 )
    {
        short unsigned int hundreds = ( number / 100 ) % 10 ;
        switch ( hundreds )
        {
            case 0 :
            {
                cout << "" ;
                break ;
            }
            case 1 :
            {
                cout << "C" ;
                break ;
            }
            case 2 :
            {
                cout << "CC" ;
                break ;
            }
            case 3 :
            {
                cout << "CCC" ;
                break ;
            }
            case 4 :
            {
                cout << "CD" ;
                break ;
            }
            case 5 :
            {
                cout << "D" ;
                break ;
            }
            case 6 :
            {
                cout << "DC" ;
                break ;
            }
            case 7 :
            {
                cout << "DCC" ;
                break ;
            }
            case 8:
            {
                cout << "DCCC" ;
                break ;
            }
            case 9:
            {
                cout << "CM" ;
                break ;
            }
        }
        short unsigned int tens = ( number / 10 ) % 10  ;
        switch ( tens )
        {
            case 0 :
            {
                cout << "" ;
                break ;
            }
            case 1 :
            {
                cout << "X" ;
                break ;
            }
            case 2 :
            {
                cout << "XX" ;
                break ;
            }
            case 3 :
            {
                cout << "XXX" ;
                break ;
            }
            case 4 :
            {
                cout << "XL" ;
                break ;
            }
            case 5 :
            {
                cout << "L" ;
                break ;
            }
            case 6 :
            {
                cout << "LX" ;
                break ;
            }
            case 7 :
            {
                cout << "LXX" ;
                break ;
            }
            case 8:
            {
                cout << "LXXX" ;
                break ;
            }
            case 9:
            {
                cout << "XC" ;
                break ;
            }
        }
        short unsigned int units = number % 10 ;
        switch ( units )
        {
            case 0 :
            {
                cout << "" ;
                break ;
            }
            case 1 :
            {
                cout << "I" << endl ;
                break ;
            }
            case 2 :
            {
                cout << "II" << endl ;
                break ;
            }
            case 3 :
            {
                cout << "III" << endl ;
                break ;
            }
            case 4 :
            {
                cout << "IV" << endl ;
                break ;
            }
            case 5 :
            {
                cout << "V" << endl ;
                break ;
            }
            case 6 :
            {
                cout << "VI" << endl ;
                break ;
            }
            case 7 :
            {
                cout << "VII" << endl ;
                break ;
            }
            case 8:
            {
                cout << "VIII" << endl ;
                break ;
            }
            case 9:
            {
                cout << "IX" << endl ;
                break ;
            }
        }
    }
    if ( number >= 10 && number <= 99)
    {
        short unsigned int tens = ( number / 10 ) % 10  ;
            switch ( tens )
            {
                case 0 :
                {
                    cout << "" ;
                    break ;
                }
                case 1 :
                {
                    cout << "X" ;
                    break ;
                }
                case 2 :
                {
                    cout << "XX" ;
                    break ;
                }
                case 3 :
                {
                    cout << "XXX" ;
                    break ;
                }
                case 4 :
                {
                    cout << "XL" ;
                    break ;
                }
                case 5 :
                {
                    cout << "L" ;
                    break ;
                }
                case 6 :
                {
                    cout << "LX" ;
                    break ;
                }
                case 7 :
                {
                    cout << "LXX" ;
                    break ;
                }
                case 8:
                {
                    cout << "LXXX" ;
                    break ;
                }
                case 9:
                {
                    cout << "XC" ;
                    break ;
                }
            }
            short unsigned int units = number % 10 ;
            switch ( units )
            {
                case 0 :
                {
                    cout << "" ;
                    break ;
                }
                case 1 :
                {
                    cout << "I" << endl ;
                    break ;
                }
                case 2 :
                {
                    cout << "II" << endl ;
                    break ;
                }
                case 3 :
                {
                    cout << "III" << endl ;
                    break ;
                }
                case 4 :
                {
                    cout << "IV" << endl ;
                    break ;
                }
                case 5 :
                {
                    cout << "V" << endl ;
                    break ;
                }
                case 6 :
                {
                    cout << "VI" << endl ;
                    break ;
                }
                case 7 :
                {
                    cout << "VII" << endl ;
                    break ;
                }
                case 8:
                {
                    cout << "VIII" << endl ;
                    break ;
                }
                case 9:
                {
                    cout << "IX" << endl ;
                    break ;
                }
            }
        }
    if ()
    return 0;
}
