#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<algorithm>

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

//reads the file and prints the text
void open_read_open() {
    fstream file ; 
    
    file.open("excercise1.txt" , ios::in) ;

    string text ; 

    while(file >> text)
    {
        cout << text << endl ; 
    }

    file.close() ;

    // count the vowels in the string text 
    int count = 0 ;
cout << " The characters in the file are : " << endl ;
    for(int i =0 ; i < text.length() ; i ++ ) 
    {
        cout << text[i] << endl ; 
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
        {
            count ++ ; 
        }
        
    }
    
    cout << endl;
    cout << " The number of the vowels are : " << count << endl ; 
} 

int main()
{

    srand(time(0));
    three_char_file() ; 

     open_read_open( ) ;
    return 0 ; 
}