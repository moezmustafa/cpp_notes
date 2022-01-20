#include<iostream>
#include<string> 
#include<ctime> 

using namespace std ;



typedef union money {
    int rice ; 
    char car ;
    float pounds ;

} mo ;

int main()

{

    mo m1 ;
    m1.rice = 100 ;
 //   m1.car = 'A' ;
   // m1.pounds = 100.00 ;

    // print m1
    cout << "Rice : " << m1.rice << endl ;
    //cout << "Car : " << m1.car << endl ;
  //  cout << "Pounds : " << m1.pounds << endl ;


}