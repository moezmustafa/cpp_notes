#include<iostream>
#include<fstream>
#include<string> 


using namespace std ; 

 void city_name_to_file()
 {

     fstream file ; 

     ofstream out("city_name.txt") ; 
     file.open("city_name.txt" , ios::out) ; 
     string city_names ; 

     for(int i = 0 ; i < 5 ; i ++)
     {
         cout << "Enter the city name : " ; 
         cin >> city_names ; 
         file << city_names << endl ; 
     }
     
     file.close() ; 
 }

int main()
{

city_name_to_file() ; 
}