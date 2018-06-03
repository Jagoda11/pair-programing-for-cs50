#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string input = get_string("Input: ");
    int counter = 0;
    if (strlen(input) == 0)
    {
        printf("Output: 0");
    }
    else
    {
        for (int i = 0; i < strlen(input); i++) // we go character by char
        {
            if (input[i] == ' ') // we check if it's space
            {
                counter++; // we increment the counter
            }
        }
        printf("Output: %i", counter + 1);
    }
}