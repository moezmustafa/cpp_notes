// •	char* generateRandomTextLine()
// •	void PrintTextLine()
// •	Void printReverseTextLine() // This function will print sentence in reverse order till first vowel encounters.
// •	Int VowelsCountTextLine()
// •	Void ChangeCaseTextLine()
// •	char* generateRandomParagraph()
// •	void printRandomParagraph()
// •	char* generateRandomChapter()
// •	void printRandomChapter()

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

//this fuctions will generate random text line
char* generateRandomTextLine()
{
    int length = rand() % 20 + 1;
    char* text = new char[length];
    for (int i = 0; i < length; i++)
    {
        text[i] = rand() % 26 + 97;
    }
    text[length] = '\0';
    return text;
}

//this function will print text line
void PrintTextLine(char* text)
{
    cout << text << endl;
}

// this function will print text line in reverse order till first vowel encounters
void printReverseTextLine(char* text)
{
    int length = strlen(text);
    for (int i = length - 1; i >= 0; i--)
    {
        cout << text[i];
    }
    cout << endl;
}

// // this function will return number of vowels in text line
// int VowelsCountTextLine( ) {
//     int count = 0;
//     char* text = generateRandomTextLine();
// }

// this function will change case of text line
void ChangeCaseTextLine(char* text)
{
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + 32;
        }
    }
    cout << text << endl;
}

// this function will generate random paragraph
char* generateRandomParagraph()
{
    int length = rand() % 20 + 1;
    char* text = new char[length];
    for (int i = 0; i < length; i++)
    {
        text[i] = rand() % 26 + 97;
    }
    text[length] = '\0';
    return text;
}

// this function will print random paragraph
void printRandomParagraph(char* text)
{
    cout << text << endl;
}
// this function will generate random chapter
char* generateRandomChapter()
{
    int length = rand() % 20 + 1;
    char* text = new char[length];
    for (int i = 0; i < length; i++)
    {
        text[i] = rand() % 26 + 97;
    }
    text[length] = '\0';
    return text;
}

// this function will print random chapter
void printRandomChapter(char* text)
{
    cout << text << endl;
}

int main()
{
    srand(time(NULL));
    char* text = generateRandomTextLine();
    PrintTextLine(text);
    printReverseTextLine(text);
    ChangeCaseTextLine(text);
    char* text2 = generateRandomParagraph();
    printRandomParagraph(text2);
    char* text3 = generateRandomChapter();
    printRandomChapter(text3);
    return 0;
}
