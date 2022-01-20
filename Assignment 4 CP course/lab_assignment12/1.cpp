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

int main()
{

    srand(time(0));

    random_text_line();

cout << endl ; 
cout << endl ; 
cout << endl ; 

    cout << random_line ;
   
    return 0;
}



