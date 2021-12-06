#include<iostream>
using namespace std;
int main()
{
    for (int i=0; i<4 ; i ++)
    {
        //for every row , run the column 
        for (int j = 0 ; j <= i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //inverted simple triangle 

    for (int i =0;i<4;i++)
    {
        cout << "you are in the 2nd for loop" ;
        for (int j=0 ; j <= 4 - i  ; )
        {
            
            cout << "*";

        }
        cout <<endl;
    }
}