#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	cout << " \n\n You are about to enter the values " << endl;

	int arr[20];

	int number = 0;
	for (int i = 0; i < 20; )
	{
		cout << " Enter a number for the index : " << i << " of the array :";
		cin >> number;

		if (number > 10 && number < 100)
		{
			arr[i] = number;

			i++;
		}
        else if (number < 10)
        {
            cout << " The number is less than 10 : : : : " << endl;
        }

        //duplicate 

	}

	cout << " \n\n Your array with 20 digits is : " << endl;

	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << setw(3);

	


	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

}




// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[20];
// 	int num;
// 	int counter;


// 	for (int i = 0; i < 20; i++)
// 	{
// 		counter = i;
// 		cout << " Enter the value of index (" << i << ") of the array :";
// 		cin >> num;

		
// 			for (int j = i; j == 0; j--)
// 			{

// 				if (num > 10 && num < 100 && num != arr[counter-j])
// 				{
// 					arr[i] = num;
// 				}

// 			}

		
// 	}
// }