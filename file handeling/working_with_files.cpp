#include<iostream>
#include<string>
#include<ctime>
#include<fstream> 

using namespace std ; 

int main()
{
    string text ; 

    string text2 ; 

    ofstream out("smaple60.txt ") ; // this creates a file named smaple60.txt 


    text = "this is a sample text afadsfadsf" ;

    out << text ;

    out.close() ;
  //reading from the file 

    ifstream in("smaple60.txt ") ; // this opens the file named smaple60.txt 

    getline(in, text2); 

    cout << text2 ; 

    return 0 ;


}