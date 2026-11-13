
#include <iostream>
#include <string>
using namespace std;

int getLength(string str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    string str;
    // Завдання 1

    //int a = 0;
    //int o = 0;

    //cout << "Enter text: ";
    //getline(cin, str);

    //for (int i = 0; i < str.length(); i++)
    //{
    //    if (str[i] == 'a' || str[i] == 'A')
    //        a++;

    //    if (str[i] == 'o' || str[i] == 'O')
    //        o++;
    //}

    //cout << "a = " << a << endl;
    //cout << "o = " << o << endl;

    //if (a > o)
    //    cout << "More a" << endl;
    //else if (o > a)
    //    cout << "More o" << endl;
    //else
    //    cout << "Equal" << endl;


    //Завдання 2

    //int letters = 0;
    //int digits = 0;
    //int spaces = 0;

    //cout << "Enter text: ";
    //getline(cin, str);

    //for (int i = 0; i < str.length(); i++)
    //{
    //    if (str[i] >= 'a' && str[i] <= 'z')
    //        letters++;

    //    else if (str[i] >= 'A' && str[i] <= 'Z')
    //        letters++;

    //    else if (str[i] >= '0' && str[i] <= '9')
    //        digits++;

    //    else if (str[i] == ' ')
    //        spaces++;
    //}

    //cout << "Letters = " << letters << endl;
    //cout << "Digits = " << digits << endl;
    //cout << "Spaces = " << spaces << endl;


    //Завдання 3

    //cout << "Enter text: ";
    //getline(cin, str);

    //for (int i = 0; i < str.length(); i++)
    //{
    //    if (str[i] >= 'a' && str[i] <= 'z')
    //        str[i] = str[i] - 32;

    //    else if (str[i] >= 'A' && str[i] <= 'Z')
    //        str[i] = str[i] + 32;
    //}

    //cout << "Result: " << str << endl;


    //Завдання 4

    //cout << "Enter text: ";
    //getline(cin, str);

    //cout << "Length = " << getLength(str) << endl;


    //Завдання 5

    int whitespaces = 0;
    int vowels = 0;
    int consonants = 0;
    int punctuation = 0;

    cout << "Enter text: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == ' ')
            whitespaces++;

        else if (ch == 'a' || ch == 'A')
            vowels++;

        else if (ch == 'e' || ch == 'E')
            vowels++;

        else if (ch == 'i' || ch == 'I')
            vowels++;

        else if (ch == 'o' || ch == 'O')
            vowels++;

        else if (ch == 'u' || ch == 'U')
            vowels++;

        else if (ch >= 'a' && ch <= 'z')
            consonants++;

        else if (ch >= 'A' && ch <= 'Z')
            consonants++;

        else if (ch == '.')
            punctuation++;

        else if (ch == ',')
            punctuation++;

        else if (ch == '!')
            punctuation++;

        else if (ch == '?')
            punctuation++;

        else if (ch == ':')
            punctuation++;

        else if (ch == ';')
            punctuation++;

        else if (ch == '-')
            punctuation++;

        else if (ch == '"')
            punctuation++;
    }

    cout << "Whitespaces = " << whitespaces << endl;
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Punctuation = " << punctuation << endl;

    return 0;
}
