//program takes one string in the argument line 
//you can choose what to do with it
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

int vowel_count(string text);
bool is_vowel(char c);
int window_count(string text);
bool is_window(char c);
string reverse(string text);
void is_palindrome(string text);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("wrong number of arguments, write a word: \n");
        return 1;
    }

    printf("choose a case: \n"
           "1 - Count how many vowels are in the string\n"
           "2 - Count how many window letters are in the string\n"
           "3 - Reverse the string case\n"
           "4 - Check if the string is a palindrome\n");

    int choice = get_int("Your choice: ");


    switch (choice)
    {
        case 1:
            printf("%d\n", vowel_count(argv[1]));
            break;

        case 2:
            printf("%d\n", window_count(argv[1]));
            break;

        case 3:
            printf("reverseCases = %s\n", reverse(argv[1]));
            break;

        case 4:
            is_palindrome(argv[1]);
            break;

        default:
            printf("please choose number from 1 to 4\n");

    }

}

// This function takes an input text and returns the number of vowels in it
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

// This function checks if characters in an input text are vowels or not
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

// This function takes an input text and returns the number of window letters in it
int window_count(string text)
{
    int counter = 0;

    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (is_window(text[i]))
        {
            counter++;
        }
    }

    return counter;
}

// This function checks if there are characters in an input text that are window letters
bool is_window(char c)
{
    string window = "ABDOPQR";
    for (int i = 0, j = strlen(window); i < j; i++)
    {
        if (c == window[i])
        {
            return true;
        }
    }

    return false;
}

// This function reverses the cases of lower and upper letters
string reverse(string text)
{
    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (islower(text[i]))
        {
            text[i] = toupper(text[i]);
        }

        else if (isupper(text[i]))
        {
            text[i] = tolower(text[i]);
        }
    }

    return text;
}

// This function check if an input text is a palindrome or not
void is_palindrome(string text)
{
    // l is the position in a string of lowest index
    int l = 0;
    // h is the position in a string of highest index
    int h = strlen(text) - 1;

    // Compare left and right letters in a string
    while (h > l)
    {
        // Exit if letters don't match
        if (text[l] != text[h])
        {
            // Print that a string is not a palindrome
            printf("No\n");
            return;
        }
        else
        {
            l++;
            h--;
        }
    }
    // Print that a string is a palindrome
    printf("Yes\n");
}
