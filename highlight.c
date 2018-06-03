#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int area(int width, int height);  // area(4, 5) + 2, area(w, h), printf("%d", area(4, 5)), int v = area(4, 5)
int max(int len, int numbers[]);

int main(int argc, string argv[])
{
    // Safe guarding for wrong number of inputs
    if (argc != 27)
    {
        printf("Wrong number of arguments");
        return 1;
    }

    int alpha_heights[26]; // array to store alphabets heights

    // 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    for (int i = 0; i < 26; i++)
    {
        alpha_heights[i] = atoi(argv[i + 1]);
    }

    string text = get_string("Text to highlight: ");
    int width = strlen(text);
    int text_heights[width];

    // To get the hight of a given char c => alpha_heights[c - 'a']
    for (int i = 0; i < width; i++)
    {
        text_heights[i] = alpha_heights[text[i] - 'a'];
    }

    int height = max(width, text_heights);
    printf("%d\n", area(width, height));
}

int area(int width, int height)
{
    return width * height;
}

int max(int len, int numbers[])
{
    // We trust Fatemeh :D
    int maximum = 0;
    for (int i = 0; i < len; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}