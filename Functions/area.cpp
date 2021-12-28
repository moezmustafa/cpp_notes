#include<iostream>
using namespace std;


int area(int  , int ) ;

int main()
{
    int width , height ; 

    cout << "Enter the value of the width : " ; 
    cin >> width ;

    cout << " Enter the value of the height : " ;
    cin >> height ;

cout << "The area of the rectangle is  :" << area(width , height) << endl;


}

int area(int a , int b)
{
    int rect =0 ;

    rect = a * b ;

    return rect ;
}