#include <stdio.h>
/**
 * print_alphabet - prints the english alphabet from a-z.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
putchar('\n');
}
