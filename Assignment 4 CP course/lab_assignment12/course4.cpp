
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;


// random textline generator
void randomTextLine(char *textLine, int length) {
    int i;
    for (i = 0; i < length; i++) {
        textLine[i] = (char)(rand() % 26 + 97);
    }
    textLine[i] = '\0';
}

//void printTextLine( )
 
 void printTextLine(char *textLine) {
    cout << textLine << endl;
}

// Print the text line in reverse order till first vowel
void printReverseTextLine(char *textLine) {
    int length = strlen(textLine);
    for (int i = length - 1; i >= 0; i--) {
        cout << textLine[i];

        if(textLine[i] == 'a' || textLine[i] == 'e' || textLine[i] == 'i' || textLine[i] == 'o' || textLine[i] == 'u') {
            break;
        }
    }
    cout << endl;
}

// Return the number of vowels in the text line
int vowelsCountTextLine(char *textLine) {
    int count = 0;
    int length = strlen(textLine);
    for (int i = 0; i < length; i++) {
        if(textLine[i] == 'a' || textLine[i] == 'e' || textLine[i] == 'i' || textLine[i] == 'o' || textLine[i] == 'u') {
            count++;
        }
    }
    return count;
}

// Change the case of the text line
void changeCaseTextLine(char *textLine) {
    int length = strlen(textLine);
    for (int i = 0; i < length; i++) {
        if (textLine[i] >= 'a' && textLine[i] <= 'z') {
            textLine[i] = textLine[i] - 32;
        }
        else if (textLine[i] >= 'A' && textLine[i] <= 'Z') {
            textLine[i] = textLine[i] + 32;
        }
    }
    cout << textLine << endl;
}

//generate random paragraph 
void randomParagraph(char *paragraph, int length) {
    int i;
    for (i = 0; i < length; i++) {
        paragraph[i] = (char)(rand() % 26 + 97);
    }
    paragraph[i] = '\0';
}

//print the paragraph
void printParagraph(char *paragraph) {
    cout << paragraph << endl;
}

// generate a random chapter 
void randomChapter(char *chapter, int length) {
    int i;
    for (i = 0; i < length; i++) {
        chapter[i] = (char)(rand() % 26 + 97);
    }
    chapter[i] = '\0';
}

// print the chapter 
void printChapter(char *chapter) {
    cout << chapter << endl;
}

// main function
int main()
{
    srand(time(NULL));
    char textLine[100];
    char paragraph[100];
    char chapter[100];
    randomTextLine(textLine, 10);
    printTextLine(textLine);
    printReverseTextLine(textLine);
    cout << vowelsCountTextLine(textLine) << endl;
    changeCaseTextLine(textLine);
    randomParagraph(paragraph, 10);
    printParagraph(paragraph);
    randomChapter(chapter, 10);
    printChapter(chapter);
    return 0;
}