#include<iostream>
using namespace std ; 

void swapper (int& , int& ) ;
int main()
{
     int x,y;

    cout << "Enter the 1st value : " ;
    cin>>x ;
    cout <<"Enter the 2nd value : " ;
    cin >> y ;

cout << endl;
cout << endl;
cout <<"value before swapping " << endl; 
cout << endl;

    cout << "1st value is : " << x  << endl;
    cout << "2nd value is : " << y  << endl;

cout << endl; 
cout << endl;
cout <<"value after swapping " << endl; 
cout << endl;

    cout << "1st value is : " << x  << endl;
    cout << "2nd value is : " << y  << endl;

cout << endl;
cout << endl;

}

void swapper (int& a , int& b ) {

    int temp ;

    temp = a ; 

    a= b ; 
    b= temp ;
}
