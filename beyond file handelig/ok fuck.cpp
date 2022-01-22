#include<iostream>
#include<fstream>
#include<string>

using namespace std; 

int main()
{
	fstream user; 

	user.open("userdata.txt", ios::app);


	cout << "this is a file creation function\n";
	
	cout << "This is going into the excel sheet";

	user.close();

	ifstream in("userdata.txt");

	string text;
	string text2;
	getline(in, text);
	getline(in, text2);

	cout << text; 
	cout << text2;

	user.close();

	user.open("userdata.txt", ios::app);


	
	cout << "\nthis ation function\n";

		cout << "This is going into the excel sheet";

	user.close();

	

}