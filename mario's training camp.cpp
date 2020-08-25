//
//  main.cpp
//  Mario's Training camp
//
//  Created by Daniel Shterev on 2.12.19.
//  Copyright © 2019 Daniel Shterev. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using std::cin ;
using std::cout ;
using std::endl ;
const int Max_Array_Size = 10000 ;
bool primeCheck (int Number ) //function for checking whether or not a number is prime
{
    bool isPrime = true ;
    for (unsigned int i = 2 ; i <= Number / 2 ; ++i)
    {
        if ( Number % i == 0 )
        {
            isPrime = false ;
            break ;
        }
    }
    return isPrime ;
}
void primeLengthsF ( int array[], int size )
{
    int platformSize = 0 ;
    for (int i = 0 ; i <= size ; ++i )
    {
        if ( array [i] == 1 )
        {
        ++platformSize ;
        }
        if ( array [i] != 1 )
        {
            if ( primeCheck (platformSize) && platformSize > 1 )
            {
                cout << platformSize << " " ;
            }
            platformSize = 0 ;
        }
    }
}
int primeLengthPlatformsF ( int array[], int size )
{
    int platformSize = 0, primeLengthPlatforms = 0 ;
    for (int i = size ; i >= 0 ; --i )
    {
        if ( array [i] == 1 )
        {
        ++platformSize ;
        }
        if ( array [i] != 1 )
        {
            if ( primeCheck (platformSize) && platformSize > 1 )
            {
                ++primeLengthPlatforms ;
            }
            platformSize = 0 ;
        }
    }
    return primeLengthPlatforms ;
}
int rowOfZerosF ( int array[], int i, int rowOfZeros )
{
    if ( array [i] == 0)
    {
        ++rowOfZeros ;
    }
    if ( array [i] == 1 )
    {
        rowOfZeros = 0 ;
    }
    return rowOfZeros ;
}
int startingPointF (int array[], int i, int startingPoint)
{
    if ( startingPoint == -1 && array[i] == 1 )
    {
        startingPoint = i ;
    }
    return startingPoint ;
}
int longestRunF ( int array[], int size, unsigned i, int startingPoint, int rowOfZeros,int& longestRun )
{
    if (array[size] == 0)
    {
        --longestRun ;
    }
    if (startingPoint == -1 && array[i] == 0)
    {
        --longestRun ;
    }
    if (startingPoint != -1 && rowOfZeros <= 3)
    {
    ++longestRun ;
}
    return longestRun ;
}
int longestPlatformF (int array[], int i, int rowOfZeros, int longestPlatform , int &previousLongestPlatform)
{
    if ( array [i] == 1 )
    {
        ++longestPlatform ;
    }
    if ( rowOfZeros == 1 )
    {
        longestPlatform = 0 ;
    }
    if (longestPlatform > previousLongestPlatform)
    {
        previousLongestPlatform = longestPlatform ;
    }
    return longestPlatform ;
}
int longestPlatformStartF ( int longestPlatformStart, int array[], int i, int& previousLongestPlatformStart, int longestPlatform, int previousLongestPlatform, int rowOfZeros )
{
    if ( rowOfZeros == 1 )
    {
        longestPlatformStart = -1 ;
    }
    if ( longestPlatformStart == -1 && array[i] == 1 )
    {
        longestPlatformStart = i ;
    }
    return longestPlatformStart ;
}
int main()
{
    int trainingMap [Max_Array_Size], N, rowOfZeros = 0, longestRun = 1, startingPoint = -1 , previousLongestRun = 0, previousStartingPoint = 0, longestPlatform = 0, previousLongestPlatform = 0, longestPlatformStart = -1, previousLongestPlatformStart = 0, primeLengthPlatforms = 0, additionalPlatform = 0, additionalLength = 1 ;
    cin >> N ;
    if (N > 10000)
    {
        cout << "Mario's training course should be no bigger than 10000 steps" << endl ;
    }
    if ( N == 0 )
    {
        int preSetTrainingMap[5] = { 1,0,1,1,1 } ;
        for (int i = 0 ; i < 5 ; ++i )
        {
            cout << preSetTrainingMap[i] << " " ;
        }
        cout << endl ;
        cout << "Best starting position is 0 and the run length is 5 steps." << endl ;
        cout << "Longest platform starts from position 2 and is 3 steps long." << endl ;
        cout << "There is 1 prime-length platform. It's length is: 3." << endl ;
        cout << "Mario needs 0 new platforms with total length 0." << endl ;
    }
    else if ( N < 0 )
    {
        srand (time(0));
        int  Max = ( rand() % 10 ) + 10 ;
        for ( int i = 0 ; i < Max ; ++i )
        {
                trainingMap[i] = rand() % 2 ;
                rowOfZeros = rowOfZerosF ( trainingMap, i, rowOfZeros ) ;
                startingPoint = startingPointF ( trainingMap, i, startingPoint );
                longestRun = longestRunF ( trainingMap, N, i, startingPoint, rowOfZeros, longestRun ) ;
                longestPlatform = longestPlatformF (trainingMap, i, rowOfZeros, longestPlatform, previousLongestPlatform ) ;
                longestPlatformStart = longestPlatformStartF( longestPlatformStart, trainingMap, i, previousLongestPlatformStart, longestPlatform, previousLongestPlatform, rowOfZeros) ;
                if ( rowOfZeros >= 4 )
                {
                    if (previousStartingPoint < startingPoint)
                    {
                        previousStartingPoint = startingPoint ;
                    }
                    longestRun -= 3 ;
                    if (previousLongestRun < longestRun)
                    {
                        previousLongestRun = longestRun ;
                    }
                    startingPoint = -1 ;
                    longestRun = 0 ;
                    rowOfZeros = 0 ;
                    ++additionalPlatform ;
                    for (int j = 0 ; j < rowOfZeros ; ++j)
                    {
                        if ( rowOfZeros - additionalLength > 3 )
                        {
                            ++additionalLength ;
                        }
                    }
                }
            }
        for (int i = 0; i < Max; ++i)
        {
            cout << trainingMap[i] << " " ;
        }
            if ( previousLongestRun > longestRun )
            {
                startingPoint = previousStartingPoint ;
                longestRun = previousLongestRun ;
            }
            cout << "Best starting position is " << startingPoint <<" and the run length is " << longestRun << " steps." << endl ;
            if (longestPlatform < previousLongestPlatform)
            {
                longestPlatform = previousLongestPlatform ;
                longestPlatformStart = previousLongestPlatformStart ;
            }
            cout << "Longest platform starts from " << longestPlatformStart << " and has length of " << longestPlatform << endl ;
            primeLengthPlatforms = primeLengthPlatformsF( trainingMap, N ) ;
            cout << "There are " << primeLengthPlatforms  << " prime-length platforms. " <<"Their lengths: " ;
            primeLengthsF ( trainingMap, N ) ;
        if ( additionalPlatform == 0 )
        {
            additionalLength = 0 ;
        }
            cout << "Mario needs " << additionalPlatform << " new platforms with total length " << additionalLength << endl  ;
        }
    else if ( N > 0 && N < 10000 )
    {
        for ( int i = 0 ; i < N; ++i )
        {
            cin >> trainingMap [i] ;
            if (trainingMap [i] != 0 && trainingMap [i] != 1 )
            {
                cout << "Numbers you enter shouldn't be anything different but 0 and 1" << endl ;
                cin >> trainingMap[i] ;
            }
            rowOfZeros = rowOfZerosF ( trainingMap, i, rowOfZeros ) ;
            startingPoint = startingPointF ( trainingMap, i, startingPoint );
            longestRun = longestRunF ( trainingMap, N, i, startingPoint, rowOfZeros, longestRun ) ;
            longestPlatform = longestPlatformF (trainingMap, i, rowOfZeros, longestPlatform, previousLongestPlatform ) ;
            longestPlatformStart = longestPlatformStartF( longestPlatformStart, trainingMap, i, previousLongestPlatformStart, longestPlatform, previousLongestPlatform, rowOfZeros) ;
            if ( rowOfZeros >= 4 )
            {
                if (previousStartingPoint < startingPoint)
                {
                    previousStartingPoint = startingPoint ;
                }
                longestRun -= 3 ;
                if (previousLongestRun < longestRun)
                {
                    previousLongestRun = longestRun ;
                }
                startingPoint = -1 ;
                longestRun = 0 ;
                rowOfZeros = 0 ;
                ++additionalPlatform ;
                if ( rowOfZeros - additionalLength > 3 )
                {
                    ++additionalLength ;
                }
            }
        }
        if ( previousLongestRun > longestRun )
        {
            startingPoint = previousStartingPoint ;
            longestRun = previousLongestRun ;
        }
        cout << "Best starting position is " << startingPoint <<" and the run length is " << longestRun << " steps." << endl ;
        if (longestPlatform < previousLongestPlatform)
        {
            longestPlatform = previousLongestPlatform ;
            longestPlatformStart = previousLongestPlatformStart ;
        }
        cout << "Longest platform starts from " << longestPlatformStart << " and has length of " << longestPlatform << endl ;
        primeLengthPlatforms = primeLengthPlatformsF( trainingMap, N ) ;
        cout << "There are " << primeLengthPlatforms  << " prime-length platforms. " <<"Their lengths: " ;
        primeLengthsF ( trainingMap, N ) ;
        if ( additionalPlatform == 0 )
        {
            additionalLength = 0 ;
        }
        cout << "Mario needs " << additionalPlatform << " new platforms with total length " << additionalLength << endl ;
    }
    return 0;
}
