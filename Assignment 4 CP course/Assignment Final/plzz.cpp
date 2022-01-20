#include<iostream>
#include<cstring>
#include<algorithm>
#include<time.h>
using namespace std;

//Char array with upper case and lower case letters and numbers 
static const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
string random_line = "";
string random_word = "";

string tokenized_line;
string random_paragraph;
string random_chapter;


int num_of_lines_paragraph = 2;
int num_of_paragraph = 1;



char  reversed_line[100];

char tokenized_line_char_array[100];



int size_alphabets = sizeof(alphabets) - 1;


//of the above function, we can see that the alphabets array is static const.
//so we can use it in the function.



char generateRandomCharacter()
{
	return alphabets[rand() % size_alphabets];
}

string random_text_line() {
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

		random_line += random_word + " ";

	}

	return random_line;

}

//tokenizing the  random_line global variable 
string tokenize_random_line(string random_line)
{
	string tokenized_line = "";
	string token = "";
	for (int i = 0; i < random_line.length(); i++) {
		if (random_line[i] == ' ') {
			tokenized_line += token + " ";
			token = "";



		}
		else {
			token += random_line[i];
		}
	}

	return tokenized_line;
}


//generating a radom paragraph from the random_text_line function
string generate_random_paragraph()
{

	for (int i = 0; i < num_of_lines_paragraph; i++) {
		random_paragraph += random_text_line() + "\n";
	}

	return random_paragraph;
}


//generating  a random chapter from the generate_random_paragraph function
string generate_random_chapter()
{
	for (int i = 0; i < num_of_paragraph; i++) {
		random_chapter += generate_random_paragraph() + "\n\n";
	}

	return random_chapter;
}


int main()
{

	system("color 0B");


	srand(time(0));
	random_text_line();

	cout << endl;
	cout << endl;
	cout << "Question 1 : ";
	cout << "Generating a random line of text : " << endl; 
	cout << endl;


	cout << random_line << endl;

	cout << endl;
	cout << endl;
	cout << "The current screen will be cleared now ";
	cout << endl;
	
	system("pause");
	system("cls");
	tokenize_random_line(random_line);


	generate_random_paragraph();

	cout << endl;
	cout << endl;
	cout << "Question 2 : ";
	cout << "Generating a random paragraph from the random line of text: " << endl;
	cout << endl;

	cout << random_paragraph << endl;

	cout << endl;
	cout << endl;

	cout << "The current screen will be cleared now ";
	cout << endl;

	system("pause");
	system("cls");


	generate_random_chapter();


	cout << endl;
	cout << endl;
	cout << "Question 3 : ";
	cout << "Generating a random chapter from the random paragraph of text: " << endl;
	cout << endl;
	cout << random_chapter << endl;


	cout << endl;
	cout << "The current screen will be cleared now ";
	cout << endl;

	system("pause");
	system("cls");




	cout << endl;




}