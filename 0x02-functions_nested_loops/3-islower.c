#include "holberton.h"
/**
 * _islower - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar(c + '0');
return (1);
}
_putchar(c + '0');
_putchar('\n');
return (0);
}
