//  Daniel Shterev
//  greatestCommonDiviser.cpp


#include <iostream>
using namespace std ;
int greatestCommonDiviser (int firstNumber, int secondNumber)
{
    int numberSave = 0, greatestCommonDiviser = 0 ;
    if (firstNumber < secondNumber)
    {
        numberSave = firstNumber ;
        firstNumber = secondNumber ;
        secondNumber = numberSave ;
    }
    if (secondNumber < 0)
    {
        firstNumber = -firstNumber ;
    }
    for (int i = 1 ; i <= firstNumber ; ++i )
    {
        if (firstNumber % i == 0 && secondNumber % i == 0 )
            greatestCommonDiviser = i ;
    }
    return greatestCommonDiviser ;
        
}
int main()
{
    int firstNumber, secondNumber ;
    cin >> firstNumber >> secondNumber ;
    cout << greatestCommonDiviser(firstNumber, secondNumber) << endl ;
    return 0;
}
