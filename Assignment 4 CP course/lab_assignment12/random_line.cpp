
// •	char* generateRandomTextLine()
// •	void PrintTextLine()
// •	Void printReverseTextLine() // This function will print sentence in reverse order till first vowel encounters.
// •	Int VowelsCountTextLine()
// •	Void ChangeCaseTextLine()
// •	char* generateRandomParagraph()
// •	void printRandomParagraph()
// •	char* generateRandomChapter()
// •	void printRandomChapter()






//headerfiles 
#include <iostream>
#include<cstring>
#include<cstdlib>
#include<ctime> 
#include<iomanip>

using namespace std;


//Char array with upper case and lower case letters and numbers 
static const char alphabets[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"0123456789";
string random_text_line = "";

//of the above function, we can see that the alphabets array is static const.
//so we can use it in the function.

int size_alphabets = sizeof(alphabets) - 1;


char generateRandomCharacter()
{
	return alphabets[rand() % size_alphabets];
}


string  generator(int max_words, int max_word_length)
{


	//generating a random Character fomr the above alphabet array

	for (int i = 0; i < max_words; i++)
	{
		generateRandomCharacter();

		int rand_length = rand() % max_word_length + 1;

		cout << " this is the rand genn length  " << rand_length;
		for (int j = 0; j < rand_length; j++)
		{
			random_text_line += generateRandomCharacter();
		}
		cout << generateRandomCharacter();
		cout << setw(4);

		cout << endl; 
		cout << random_text_line;

		return random_text_line;

	}
	
	

}






	//main function starts here
	int main()
	{

		srand(time(0));

		cout << "Enter the number of words you want to generate : ";
		int max_words;
		cin >> max_words;
		cout << "Enter the maximum length of the word you want to generate : ";
		int max_word_length;
		cin >> max_word_length;
		generator(max_words, max_word_length); // calling the generator function


	}