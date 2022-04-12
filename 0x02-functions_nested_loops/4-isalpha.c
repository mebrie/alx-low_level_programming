#include "main.h"
/**
 * _isalpha(int c)  checks for alphabetic character.
 * @C: Checks for an alphabetic character. Recreation of ``isalpha``
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
