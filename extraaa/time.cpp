//print system time
#include<iostream>
#include<string>
#include<fstream>
#include<ctime>

using namespace std ;
int main()
{
    time_t t ; 
    time(&t) ; 
    cout << "the system time is : " << ctime(&t) << endl ; 
    return 0 ; 
}