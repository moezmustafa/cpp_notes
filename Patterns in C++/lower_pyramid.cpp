#include <iostream>
using namespace std;
int main()
{
   //lower halve 
	for (int i = 0; i < 5; i++)
	{
		//spaces loop lower halve 
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}

		// star printer 
		for (int j = 5; j > i; j--)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
return 0;
}