//Hemmingnumbers.cpp
//Daniel Shterev

#include <iostream>
using namespace std;
int main()
{
    int n, check = 0, number = 1  ;
    cin >> n ;
    if (n <= 0)
    {
        cout << "N should be a number higher than 0" << endl ;
    }
    else
    {
        cout << number << " " ;
        --n ;
        while (check < n)
        {
        if ( number % 2 == 0 )
        {
          check ++ ;
          cout << number << " " ;
          number ++ ;
          continue ;
        }
        if ( number % 3 == 0 )
        {
          check ++ ;
          cout << number << " " ;
          number ++ ;
          continue ;
        }
        if ( number % 5 == 0 )
        {
          check ++ ;
          cout << number << " " ;
          number ++ ;
          continue ;
        }
        else
        {
          number ++ ;
        }
        }
        cout << endl ;
        return 0 ;
    }
}
