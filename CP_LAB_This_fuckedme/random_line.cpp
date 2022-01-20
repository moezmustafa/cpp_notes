#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;



//Char array with upper case and lower case letters and numbers 
static const char alphabets[] = "abcdefghijklmnopqrstuvwxyz" ;
string random_line = "";
string random_word = "";

int size_alphabets = sizeof(alphabets) - 1;


//of the above function, we can see that the alphabets array is static const.
//so we can use it in the function.



char generateRandomCharacter()
{
	return alphabets[rand() % size_alphabets];
}

string random_text_line(){
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

//printing the random text line
void print_random_text_line(){
    cout << random_text_line() << endl;
}


//splitting the random text line into words using strtok
void split_random_text_line(){
    char *token;
    char *str = new char[random_line.length() + 1];
    strcpy(str, random_line.c_str());
    token = strtok(str, " ");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, " ");
    }
}
















int main()
{

    srand(time(0));

    random_text_line();
    print_random_text_line();


    split_random_text_line();

   
    return 0;
}



