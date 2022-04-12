#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
int i, j, multi;
if (!(n > 15 || n < 0))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
multi = (i * j);
if (j != 0)
{
putchar(',');
putchar(' ');
}
if (multi < 10 && j != 0)
{
putchar(' ');
putchar(' ');
putchar((multi % 10) + '0');
}
else if (multi >= 10 && multi < 100)
{
putchar(' ');
putchar((multi / 10) + '0');
putchar((multi % 10) + '0');
}
else if (multi >= 100 && j != 0)
{
putchar((multi / 100) + '0');
putchar((multi / 10) % 10 + '0');
putchar((multi % 10) + '0');
}
else
putchar((multi % 10) + '0');
}
putchar('\n');
}
}
}
