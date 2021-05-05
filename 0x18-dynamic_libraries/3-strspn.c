#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: prefix substring;
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
for (i = 0; s != '\0'; i++)
{
if (s[i] == *accept)
{
break;
i++;
}
}
return (i);
}
