#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std ;
int main()
{

    int* p1 ;
    int* p2 ;

    p1 = new int[5] ;
    p2 = new int[5] ;


    //array filler 
    for(int i = 0 ; i < 5  ; i ++)
    {
        p1[i] = i ;
    }

    p2[0]= 1 ;
    p2[1]= 1 ; 
    p2[2]= 2 ; 
    p2[3]= 2 ; 
    p2[4]= 4 ; 

    //printing the 2 arrays 

cout << " your 1st array is : "  ;
cout << endl ;
cout << endl ;
    for(int i = 0 ; i < 5  ; i ++)
    {
       cout << p1[i+1] << setw(3) ;
    }
cout << endl ;
cout << endl ;
for(int i = 0 ; i < 5  ; i ++)
    {
       cout << p2[i] << setw(3) ;
    }

cout << endl ;
cout << endl ;

int* p3 ; 
p3 = new int[5] ;

// sum of arrays 
for (int i = 0 ; i < 5 ; i ++)
{
    p3[i] = p1[i] + p2[i] ;

}

//printing the sum array
cout << "The sum of the 2 arrays are : " << endl ;
cout << endl;
for (int i = 0 ; i < 5 ; i ++)
{
    cout << p3[i] << setw(3) ;
    
}

cout << endl ;
cout << endl ;

system("pause");
}

    

    
