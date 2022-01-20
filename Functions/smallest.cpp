#include<iostream>
using namespace std ;

int smallest (int  , int  , int );


int main()
{
    int x,y,z;

    cout << "Enter the 1st value : " ;
    cin>>x ;
    cout <<"Enter the 2nd value : " ;
    cin >> y ;
    cout << "Enter the 3rd value : " ;
    cin >> z ;

    cout << "calling the smallest function : Value is : " << smallest(x,y,z) << endl ;
}

int smallest (int a , int b , int c)
{
    int great =0;

    if (a>b&&a>c)
    {
        great = a ; 
    }
    else if (b>a&&b>c)
    {
        great = b ; 
    }
    else if (c>b&&c>a)
    {
        great = c ; 
    }

    return great ; 
}