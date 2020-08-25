//
//  main.cpp
//  Card Deck
//
//  Created by Daniel Shterev on 20.12.19.
//  Copyright © 2019 Daniel Shterev. All rights reserved.
//

#include <iostream>
#include <time.h>
using namespace std ;
const int Max_Size = 52 ;
void swapAtIndecies ( int x, int y )
{
    int temp = x ;
    x = y ;
    y = temp ;
}
void readArray (int resultArray [], unsigned int size)
{
    for ( int i = 0; i < size ; ++i )
    {
        cin >> resultArray[i] ;
    }
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void cardSort (int deck [] )
{
    
    for (int i = 0 ; i <= 11 ; ++i )
    {
        deck[i] = deck[i+1] ;
        deck[i+13] = deck [i+14] ;
        deck [i+26] = deck [i+27] ;
        deck [i+39] = deck [i+40] ;
    }
    deck[12] = 101 ;
    deck[25] = 201 ;
    deck[38] = 301 ;
    deck[51] = 401 ;
}
void printArray (int deck[] , int size)
{
    for ( int i = 0 ; i < size ; ++i )
    {
        cout << deck[i] << " " ;
    }
    cout << endl ;
}
void shuffleDeck (int deck[], int size)
{
    srand (time (0)) ;
    for (int i = 0 ; i < size ; ++i )
    {
        int index = rand () % size ;
        
        int temp = deck [i] ;
        deck[i] = deck[index] ;
        deck[index] = temp ;
    }
}
void insertionSort1(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        printArray(arr, n) ;
        arr[j + 1] = key;
    }
}
int main()
{
    int deck[Max_Size] ;
    readArray(deck, Max_Size) ;
    insertionSort(deck, Max_Size) ;
    cardSort(deck) ;
    shuffleDeck(deck, Max_Size) ;
    insertionSort1(deck, Max_Size) ;
    printArray (deck, Max_Size) ;
    return 0;
}

/*
 101 102 103 105 108 106 107 104 109 110 112 111 113
 301 303 302 304 305 306 307 308 310 309 311 312 313
 401 402 403 405 404 406 408 407 409 410 411 413 412
 202 203 201 204 206 205 207 208 210 209 211 212 213
 */
