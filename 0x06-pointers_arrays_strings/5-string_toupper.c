#include "holberton.h"
/**
 * *string_toupper - function that compares two strings
 * @string: paramater for array
 * Return: Always 0.
 */
char *string_toupper(char *string)
{
while (*string)
{
if (*string >= 'a' && *string <= 'z')
{
*string = *string - 32;
}
string++;
}
return (string);
}
