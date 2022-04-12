#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, multi;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
multi += i;
}
printf("%d\n", multi);
return (0);
}
