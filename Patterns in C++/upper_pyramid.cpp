#include <iostream>
using namespace std;
int main()
{
   for(int i=0;i<5;i++)
   {
       //spaces 
       for (int k = 5 ; k > i ; k--)
       {
           cout << " " ;
       }
       for (int j =0;j<i ; j ++ )
       {
           cout<< "*" << " ";
       }
       cout << endl;
   }
return 0;
}

/*
   print the upper half of a triangle and with each line you hve to add spaces 
   to do that just add a space above that star printer loop 

   to do that you have to set that loops counter to the max number of spaces that you need 

   but this will only give you are right shifted triangle to make it a perfect pyramid you have to add space
   after the * in the space printer loop as well 
*/