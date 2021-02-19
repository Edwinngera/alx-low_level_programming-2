#include "holberton.h"
/**
 * _strncpy - function that copys strings
 * @dest: paramater for string 2
 * @src: paramater for string 1
 * @n: integer
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
