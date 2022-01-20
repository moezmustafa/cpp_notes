#include<iostream>
#include<string>

using namespace std ;


typedef struct rectangle {

    float left  ;
    float right ;


}rec ; 

rec one ;
int area ; 

int  computeArea(rec & one )
{

cout << "Enter the value of the left : " ;
cin >> one.left ;
cout << "Enter the value of the right : " ;
cin >> one.right ;


return area = one.left * one.right ;
}


int main()
{


computeArea ( one ) ;

cout << "The Area of the Rectangle is : "<<area ;
cout << endl;
cout << endl;
cout << endl;

}