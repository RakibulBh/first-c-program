#include <stdio.h>

int main()
{
     int c;
    int char_count = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar(' ');
            for (int i = 0; i < char_count; i++)
            {
                putchar('-');
            };
            char_count = 0;
            putchar('\n');
        }
        else
        {
            putchar(c);
            char_count++;
        }
    }

    return 0;
}
