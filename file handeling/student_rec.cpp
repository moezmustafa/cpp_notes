#include<iostream>
#include<fstream> 
#include<string> 

using namespace std ; 

void seprator(char a )
{
     while(file >> text_line)
    {
        if(text_line[0] == a)
        {
           getline(file , text_line) ;
             cout << text_line << endl ;
        }

    }
}


void student_name_seprator( )
{
    fstream file ; 
    
    file.open("student_record.txt" , ios::in) ; 

    string names ; 
    string text_line ; 
    int phone ; 
    string department ;
    string university ; 
    string email ; 

    //seprate the line starting with the number 1
   
seerator('1') ;
seprator('2') ;
seprator('3') ;
seprator('4') ;
seprator('5') ;


    file.close() ;




}


int main()
{
    student_name_seprator() ; 
    return 0 ; 
}