#include "holberton.h"

/**
 * _strcat - concatenate two strings.
 * @dest: string input.
 * @src: string to concatenate to dest.
 * Return: char pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *s;

s = dest;
while (*dest != '\0')
dest++;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);

}
