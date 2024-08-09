#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
    int c;
    int previousBlank = 0; // This will track if the last character was a blank

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!previousBlank)
            { // If the previous character wasn't a blank, print this one
                putchar(c);
                previousBlank = 1; // Now the previous character is a blank
            }
            // If the previous character was a blank, do nothing (skip this blank)
        }
        else
        {
            putchar(c);        // Print the current character
            previousBlank = 0; // Reset, because the current character is not a blank
        }
    }

    return 0;
}
