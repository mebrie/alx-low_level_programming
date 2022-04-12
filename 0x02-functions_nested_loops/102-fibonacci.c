#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0 (success)
*/
int main(void)
{
        long double f1 = 1, f2 = 1, f3;
        int i;

        i = 1;

        printf("%.Lf, ", f2);
        while (i <= 49)
        {
        f3 = f1 + f2;
        printf("%.Lf", f3);
        i++;
        f1 = f2;
        f2 = f3;
        if (i != 50)
        {
                printf(", ");
        }
        }
        putchar('\n');
        return (0);
}
