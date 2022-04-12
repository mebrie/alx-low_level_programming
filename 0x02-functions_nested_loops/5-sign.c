#include <stdio.h>
/**
 * print_sign(int n) prints the sign of a number.
 *
 * Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('-');
return ('/');
}
}
