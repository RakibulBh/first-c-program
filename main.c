#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
            putchar('\n');
        else
            putchar(c);
    }

    return 0;
}
