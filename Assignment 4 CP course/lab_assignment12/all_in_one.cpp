
void  generator (int max_word_length, int max_sentence_length, int max_paragraph_length, int max_chapter_length)
{
    srand(time(0));
    int word_length = rand() % max_word_length + 1;
    int sentence_length = rand() % max_sentence_length + 1;
    int paragraph_length = rand() % max_paragraph_length + 1;
    int chapter_length = rand() % max_chapter_length + 1;
    char* word = new char[word_length];
    char* sentence = new char[sentence_length];
    char* paragraph = new char[paragraph_length];
    char* chapter = new char[chapter_length];
    for (int i = 0; i < word_length; i++)
    {
        word[i] = alphabets[rand() % size_alphabets];
    }
    word[word_length] = '\0';
    for (int i = 0; i < sentence_length; i++)
    {
        sentence[i] = alphabets[rand() % size_alphabets];
    }
    sentence[sentence_length] = '\0';
    for (int i = 0; i < paragraph_length; i++)
    {
        paragraph[i] = alphabets[rand() % size_alphabets];
    }
    paragraph[paragraph_length] = '\0';
    for (int i = 0; i < chapter_length; i++)
    {
        chapter[i] = alphabets[rand() % size_alphabets];
    }
    chapter[chapter_length] = '\0';
    cout << "Word: " << word << endl;
    cout << "Sentence: " << sentence << endl;
    cout << "Paragraph: " << paragraph << endl;
    cout << "Chapter: " << chapter << endl;
}