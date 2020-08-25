//  circles.cpp
// Daniel Shterev

#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    int x1, y1, x2, y2, r1, r2, xz, yz ;
    double p ;
    cout << "Please enter coordinates to the first circle: " ;
    cin >> x1 >> y1 ;
    cout << "Please enter a radius to the first circle: " ;
    cin >> r1 ;
    cout << "Please enter coordinates to the second circle: " ;
    cin >> x2 >> y2 ;
    cout << "Please enter a radius to the second circle: " ;
    cin >> r2 ;
    if ( x1 >= x2 ) //checks which circle's central point is farther than the others
        {
            xz = x1 - x2 ;
        }
    else
       {
           xz = x2 - x1 ;
       }
    if ( y1 >= y2 ) //checks which circle's central point is higher than the other's
        {
            yz = y1 - y2 ;
        }
    else
        {
            yz = y2 - y1 ;
        }
    p = sqrt ( xz*xz + yz*yz ) ; //calculates distance between circles
    if ( ( r1 + r2 ) > p ) // checks if sum of the radiuses is bigger than the distance between the circles
    {
        cout << "Circles cross each other" << endl ;
        return 0 ;
    }
    if ( ( r1 + r2 ) == p ) // checks if sum of the radiuses is equal to the distance between the circles
    {
        cout << "Circles touch each other" << endl ;
        return 0 ;
    }
    if (  ( r1 + r2 ) < p ) // checks if sum of the radiuses is smaller than the distance between the circles
    {
        cout << "Circles have no common tangents" << endl ;
        return 0 ;
    }
}
