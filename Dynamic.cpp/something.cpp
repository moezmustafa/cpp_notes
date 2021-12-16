#include<iostream>
#include <time.h>
#include<iomanip>
using namespace std;
int main()
{
    int number ; 
    int size ; 

    cout << " \n\n Enter the size of the array :";
    cin>>size ;

    int* pointer ; 
    pointer = new int[size];

    //filling the array with random
    srand(time(0));

    for(int i =0 ; i < size ; i ++ )
    {
        pointer[i]=rand()%10;

    }
   
   //printing the array 
cout<<"\n\n The array created is : \n\n" ;
   for(int i =0 ; i < size ; i ++)
   {
       cout << pointer[i] << setw(3) ;
   }

   //Even odd algorithm 
   int even=0 , odd =0;
   for(int i = 0 ; i < size ; i ++)
   {
       if(pointer[i]%2==0)
       {

           even++ ;
       }
       else if (pointer[i]%2!=0)
       {
           odd++;
       }
   }


cout <<endl;
cout <<endl;

cout << " The number of ODDS are : " << odd << endl; 
cout << " The number of EVENS are : " << even << endl ;

cout << endl; 
cout << endl; 

system("pause");
} 