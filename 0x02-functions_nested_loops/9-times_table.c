#include <stdio.h>
/**
 * times_table(void) prints the 9 times table, starting with 0.
 *
 * Return: 9 times table
 */
void times_table(void)
{
int n, j, mult;
for (n = 0; n <= 9; n++)
{
for (j = 0; j < 10; j++)
{
mult = (n * j);
if (j != 0)
{
putchar(',');
putchar(' ');
}
if (mult >= 10)
{
putchar((mult / 10) + '0');
putchar((mult % 10) + '0');
}
else if (mult < 10 && j != 10)
{
putchar(' ');
putchar((mult % 10) + '0');
}
else
putchar ((mult % 10) + '0');
}
putchar('\n');
}
}
