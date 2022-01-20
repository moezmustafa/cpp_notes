#include<iostream>
#include<string>
using namespace std ; 

typedef struct power {
    int hour ; 
    int minute ;
    int seconds ; 

} po ; 

 
int main()
{
    po object ; 

    po* ptr = &object ;

    po array[10];

    
    object.hour = 5 ; 
    object.minute = 10 ;
    object.seconds = 20 ;
}
