#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
    {
        printf("%.0f\n", nc);
    }
}
