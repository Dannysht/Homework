//  Daniel Shterev
//  Zimbo.cpp

#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std ;
const char* exclamations [] = { "SHOK", "SKANDAL", "Nechuvana naglost", "Nqma da povqrvate" } ;

const size_t exclamationCount = 4 ;

const char* exclamationMarks [] = { "!!! ", "!!!! ", "!!!!! ", "!!!!!! ", "!!!!!!! ", "!!!!!!!! ", "!!!!!!!!! ", "!!!!!!!!!! " } ;

const size_t exclamationMarkCount = 8 ;

const char* subjects [] = { "zele ", "rqpa ", "baba ", "kamion ", "sumist ", "leblebia ", "student ", "universitet ", "FMI " } ;

const size_t subjectCount = 9 ;

const char* actions [] = {"pada vurhu ", "igrae shah s ", "rita ", "qde ", "prebi ", "specheli ", "preparira "} ;

const size_t actionCount = 7 ;

void generateHeading ()
{
    const char* excl = exclamations [ rand () % exclamationCount ] ;
    const char* exclMarks = exclamationMarks [ rand() % exclamationMarkCount ] ;
    const char* sub = subjects [ rand () % subjectCount ] ;
    while ( !strncmp(sub, "universitet", 11) || !strncmp(sub, "FMI", 3) )
    {
        sub = subjects [ rand () % subjectCount ] ;
    }
    const char* obj = subjects [rand () % subjectCount] ;
    const char* action = actions [rand () % actionCount ] ;
    char* heading = new (std::nothrow) char [strlen (excl) + strlen(exclMarks) + strlen(sub) + strlen(action) + strlen(obj) + 1 ];
    strcpy( heading, excl ) ;
    strcat( heading, exclMarks ) ;
    strcat ( heading, sub ) ;
    strcat ( heading, action ) ;
    strcat ( heading, obj ) ;
    cout << heading << endl ;
    
    delete [] heading ;
}

int main()
{
  int n ;
  cout << "Enter number of headings: " ;
  cin >> n ;
    for (int i = 0 ; i < n ; ++i )
    {
        generateHeading() ;
    }
    return 0 ;
}
