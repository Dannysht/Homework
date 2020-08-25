
//  numbers.cpp
//  Daniel Shterev

#include <iostream>
using std::cout ;
using std::cin ;
using std::endl ;
int main()
{
    short unsigned int number ;
    cout << "Enter a number: " ;
    cin >> number ;
    while (number > 3000 || number < 0) // Checks whether the number is in limit
    {
        cout << "Invalid number" << endl ;
        cout << "Number should be between 0 and 3000" << endl << "Enter a number: " ;
        cin >> number ;
    }
    switch (number / 1000) // Checks thousands of the number
    {
        case 0:
        {
            cout << "" ;
            break ;
        }
        case 1 :
        {
            cout << "M" ;
            break ;
        }
        case 2:
        {
            cout << "MM" ;
            break ;
        }
        case 3:
        {
            cout << "MMM" ;
            break ;
        }
    }
    switch ( (number / 100) % 10) // Checks hundreds of the number
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
    switch ( ( number / 10 ) % 10 ) // Checks tens of the number
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
    switch ( number % 10 ) // Checks units of the number
    {
        case 0 :
        {
            cout << "" << endl ;
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
    return 0;
}
