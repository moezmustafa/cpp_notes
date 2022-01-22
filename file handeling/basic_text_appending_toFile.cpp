#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std ;


int main ()
{
    string name = "moeez.txt" ;

    fstream myFile ; 

  //  fstream out(name , ios::out) ;
    myFile.open(name  , ios :: out ) ;


   
    string text ; 

    text = "hello world" ; 

    cout << text ; 

    myFile.close() ;

}