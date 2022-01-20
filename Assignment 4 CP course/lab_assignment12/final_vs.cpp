#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;


////////////GLobal Variables////////////
//Char array with upper case and lower case letters and numbers 
static const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int size_alphabets = sizeof(alphabets) - 1;

string random_word[400];
char random_line[40];
char reverse_line[40];
////////////GLobal Variables////////////



/////////////////Function Prototype/////////////////////////////
char generateRandomCharacter();

void generateRandomTextLine();

void PrintTextLine();

void ReverseTextLine();

void printReverseTextLine();
/////////////////Function Prototype/////////////////////////////





////////////////// Main Function //////////////////////////////
int main()
{

	srand(time(0));

	cout << endl;
	cout << "Random Text Line: " << endl;
	generateRandomTextLine();
	PrintTextLine();

	cout << endl;
	cout << "Reverse Text Line: " << endl;

	ReverseTextLine();
	



	return 0;
}
////////////////// Main Function //////////////////////////////






////////////////Function Definition/////////////////////////////
////////////////Function Definition/////////////////////////////
////////////////Function Definition/////////////////////////////



//Generates one Random text for above defined array of alphabets
//Generates one Random text for above defined array of alphabets
//Generates one Random text for above defined array of alphabets
char generateRandomCharacter()
{
	return alphabets[rand() % size_alphabets];
}


// Random text line generator , with return type string
// Random text line generator , with return type string
// Random text line generator , with return type string
void  generateRandomTextLine()
{



	int max_words = rand() % 6 + 2;                   // gen a random number between 2 and 6

	int max_word_length = rand() % 10 + 1;          // gen a random number between 1 and 10

        //generating a random Character fomr the above alphabet array
	int rand_length = rand() % max_word_length + 1;


	for (int i = 0; i < max_words; i++)
	{
		generateRandomCharacter();                                      // generate a random character
		for (int j = 0; j < rand_length; j++)
		{
			random_word += generateRandomCharacter();
		}

		// cout << setw(4);
		// cout << random_word << "  ";

		  //saving the random word in the array
		for (int i = 0; i < max_words; i++)
		{
			random_line += random_word;
		}

	}

	



}


//print the random text line
//print the random text line
//print the random text line
void PrintTextLine() {
	cout << random_line << endl;
}


//reverse the random text line
//reverse the random text line
//reverse the random text line
void ReverseTextLine() {

	int length = strlen(random_line);
	for (int i = length - 1; i >= 0; i--)
	{
		reverse_line[i] += random_line[i];
	}

}