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