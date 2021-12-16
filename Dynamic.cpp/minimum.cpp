#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
int main()
{
    int size ; 
    int* pointi ; 
    cout << " Enter the value for the array : " ; 
    cin >>size ; 

    pointi = new int[size] ;

    

     
     //array filler 

     srand(time(0));

     for(int i=0 ; i < size ; i ++)
     {
         pointi[i]=rand() % 10 ; 

     }

     // displaying the array 

     for(int i = 0 ; i < size ; i ++ )
     {
         cout << pointi[i] << setw(4) ;

     }

     //finding minimumm ;

     int mini = pointi[0]; 

     for(int i =0 ; i < size ; i ++)
     {
         if (pointi[i] < mini)
         {
             mini = pointi[i] ;
         }

     }


     cout << endl;
     cout << endl;

     cout << " The Minimum Value is :" << mini << endl; 

     cout << endl;
     cout << endl;

     

system("pause") ;
     
}