#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std ;

int main(){

    srand(time(0));

    int size ; 
    cout << "\n\n Enter the vlaue of the array : " ;
    cin >> size ;  
    int* pointer ; 

    pointer = new int[size];

    //array filler 
    for(int i =0 ; i < size ; i ++ )
    {
        pointer[i] = rand()% 10 ; 
    }

    //printing the array 
    cout <<" \n\n Your array is : \n" ;
    for(int i = 0 ; i < size ; i ++)
    {
        cout << pointer[i] << setw(3) ;
    }



    // sum of values 
    int sum = 0 ;
    for (int i = 0 ; i < size ; i ++ )
    {
        sum = sum + pointer[i];
    }

    cout << "\n\n The value of sum is : " << sum << endl ; 

    //average calculator

    cout << "\n\nAverage is : " << sum/10 << endl; 

    system("pause") ; 
}