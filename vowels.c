//the program counts how many vowels there are in the string
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int vowel_count(string text);
bool is_vowel(char c);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("You need two arguments\n");
        return 1;
    }
    int repetition = atoi(argv[1]);

    for (int i = 0; i < repetition; i++)
    {
        string text = get_string("Input: ");
        printf("#vowels= %d\n", vowel_count(text));
    }

}
// This function takes a text and returns the number of vowels in it
int vowel_count(string text)
{
    int counter = 0;
    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (is_vowel(text[i]))
        {
            counter++;
        }
    }
    return counter;
}

// This function checks if a char is vowel or not
bool is_vowel(char c)
{
    string vowels = "aAeEiIoOuU";
    for (int i = 0, j = strlen(vowels); i < j; i++)
    {
        if (c == vowels[i])
        {
            return true;
        }
    }
    return false;
}