#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<time.h>

using namespace std ;

void stringlength(string str) 
{
    cout << "the length of the string is : " << str.length() << endl ;
}

string stringcopy(char str[] , char str2[])
{

 strcpy(str2 , str) ;

    cout << "the copied string is : " << str2 << endl ;

    return str ;
}


int compare(char str1[] , char str2[])
{

    if(strcmp(str1 , str2) == 0 )
    {
        cout << "the two strings are euqal " << endl ;
    }
    else if(strcmp(str1 , str2) > 0)
    {
        cout << "the first string is greater than the second string " << endl ;
    }
    else if(strcmp(str1 , str2) < 0)
    {
        cout << "the first string is less than the second string " << endl ;
    }
    else
    {
        cout << "the two strings are not equal " << endl ;
    }
}


 
 int main()
 {


string wow = " i am just an ordianry string " ;

stringlength(wow) ;

char string1 []= " hello ";
char string2 []= " world " ;

stringcopy(string1 , string2) ;


char string3 []= " hello ";
char string4 []= " hello " ;
compare(string2, string4) ;

char date[100] ;

strptime(date);

 }