#include<iostream>
#include<cmath>
using namespace std;



int power(int x, int y)
{
	if (y == 0)
		return 1;
	else if (y % 2 == 0)
		return power(x, y / 2) * power(x, y / 2);
	else
		return x * power(x, y / 2) * power(x, y / 2);
}


int main()
{
	int x, n; 
	cout << "Enter the value of X : "; 
	cin >> x; 

	cout << " Enter The value of power : ";
	cin >> n;

	cout << "calling the function >>> power : value is : " << power(x, n) << endl;

	cout << endl;
	cout << endl;
	cout << endl;
}
