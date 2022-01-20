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


