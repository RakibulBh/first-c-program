#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    printf("Fahrenheit-Celsius table\n");
    for (float fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
