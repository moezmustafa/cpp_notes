#include<iostream>
#include<string>
#include<fstream> 
#include<ctime> 

using namespace std ;


void poem_printer()
{
fstream poem ; 

poem.open("poem.txt" , ios::in) ; 

string text ; 
int counter ; 
while(poem >> text)
{
    getline(poem , text) ;

    cout << text << endl ;

    counter++ ;
}

cout << "\n\nThe number of line in the poem are : " << counter << endl ; 
cout << endl ;
cout << endl ;
}


int main()
{

    poem_printer() ; 
    return 0 ; 

}




