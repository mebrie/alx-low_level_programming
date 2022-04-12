#include "main.h"
/**
 * _isalpha(int c)  checks for alphabetic character.
 * @c: Checks for an alphabetic character. Recreation of ``isalpha``
 * Return: 0 or 1
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
