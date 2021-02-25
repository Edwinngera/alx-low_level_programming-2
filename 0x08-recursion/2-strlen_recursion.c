#include "holberton.h"
/**
 * _strlen_recursion - function that prints number of a string.
 * @s: points to elements of the  char array or string
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
/* if we reach at the end of the string*/
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
