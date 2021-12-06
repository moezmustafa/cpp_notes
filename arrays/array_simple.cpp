#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    cout << "\n\n\n";
   int arr[5];

srand(time(0));
//array filler 
   for (int i = 0 ; i < 5 ; i++)
   {
       arr[i]=rand( ) %100;
   }
//printer 
for(int i =0;i<5;i++)
{
 cout << arr[i] << "  ";
}
    cout << "\n\n\n";

return 0;
}