#include<iostream>
#include<string>

using namespace std ; 

typedef struct user { 
    string name ; 
    int age ; 
    string address ; 
    string phone ; 
    string email ; 
    string password ; 
}us;


//struxt with a fuction 


typedef struct function {

    int moeez ;
    
    void print() {
        cout << "Moeez : " << moeez << endl ;
    }
} fu;


int main()
{

  struct user harry ;
    harry.name = "Harry" ;
    harry.age = 20 ;
    harry.address = "Kathmandu" ;
    harry.phone = "9841234567" ;
    harry.email = "kuta@something.com";
    harry.password = "12345" ;


    us moeez ; 
    moeez.name = "Moeez" ;
    moeez.age = 20 ;
    moeez.address = "Kathmandu" ;
    moeez.phone = "9841234567" ;
    moeez.email = "afadsf";
    moeez.password = "12345" ;





    cout << "Name : " << harry.name << endl ;
    cout << "Age : " << harry.age << endl ;
    cout << "Address : " << harry.address << endl ;
    cout << "Phone : " << harry.phone << endl ;
    cout << "Email : " << harry.email << endl ;
    cout << "Password : " << harry.password << endl ;

cout << endl;
    // print us moeez 
    cout << "Name : " << moeez.name << endl ;
    cout << "Age : " << moeez.age << endl ;
    cout << "Address : " << moeez.address << endl ;
    cout << "Phone : " << moeez.phone << endl ;
    cout << "Email : " << moeez.email << endl ;
    cout << "Password : " << moeez.password << endl ;




//struct with a function 

fu power ; 
   something.moeez = 10 ; 



  struct moeez ;
  print() ;
    return 0 ;


}

void shit ( user , user ) {

}