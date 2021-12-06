#include<iostream>
using namespace std;
int main()
{
    
    //inverted simple triangle 

    for (int i =0;i<4;i++)
    {
        cout << "you are in the 2nd for loop" ;
        for (int j=0 ; j < i  ; j++)
        {
            
            cout << "*";

        }
        cout <<endl;
    }
}