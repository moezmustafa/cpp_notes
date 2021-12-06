#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
   for(int i = 0; i < 5 ; i ++ )
   {
       for (int j = 0 ; j < i ;j++)
       {
           cout << j+1 << "  " ;
       }
       cout << endl;
   }
return 0;
}