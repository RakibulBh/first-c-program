#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
    int c;
    int spaces = 0;
    int tabs = 0;
    int newlines = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++spaces;
        }
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == '\n')
        {
            ++newlines;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
}
