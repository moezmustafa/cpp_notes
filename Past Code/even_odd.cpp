#include<iostream>
using namespace std;
int main() {

	int arr[10];
	int even=0;
	int odd=0;
cout << odd << endl;
	cout << even << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << " Enter a vlaue for the array [" << i << "] index "  << endl;
		cin >> arr[i];

	}

	cout << " The array is : " << endl;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even++;
		}
		else if (arr[i] % 2 != 0)
		{
			odd++;
		}
	}

	cout << " Number of Even numbers are : " << even << endl;
	cout << " Number of Odd numbers are  : " << odd << endl;
	cout << endl;

}