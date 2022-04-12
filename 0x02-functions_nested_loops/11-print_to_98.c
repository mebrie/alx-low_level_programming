#include <stdio.h>
/**
 *print_to_98(int n) prints all natural numbers from n to 98, followed by a new line.
 *
 * Return: natural numbers from n to 98
 */
void print_to_98(int n)
{
for (n = n; n < 98; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
}
