#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 256

void countCharacters(const char* text)
{
    int count[MAX_CHAR] = {0};

    for (int i = 0; text[i]; i++)
    {
        int index = (int)text[i];
        count[index]++;
    }

    for (int i = 0; i < MAX_CHAR; i++)
    {
        if (count[i] > 0)
        {
            printf("%c:%d\n", (char)i, count[i]);
        }
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: %s text [text2, text3...]\n", argv[0]);
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        countCharacters(argv[i]);
    }

    return 0;
}
