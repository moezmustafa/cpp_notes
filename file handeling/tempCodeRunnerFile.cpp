#include<iostream>
#include<string>
#include<fstream>
#include<ctime>

using namespace std ;
 
    char c ; 

//random character generator
char random_char()
{
    c = rand() % 26 + 'a' ; 
    return c ; 
} 


void three_char_file()
{
    fstream  file ; 
    
    fstream out("sample61.txt ") ;
    file.open("excercise1.txt" , ios::app) ;  //this will add the files into the existing text line 
    
    string text ; 

    for(int i = 0 ; i < 3 ; i ++)
    {
         text += random_char() ;
    }

    file << text ; 

    file.close() ; 

    
}

int main()
{

    srand(time(0));
    three_char_file() ; 

    return 0 ; 
}