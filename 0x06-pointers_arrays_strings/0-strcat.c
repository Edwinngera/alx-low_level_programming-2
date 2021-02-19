#include "holberton.h"
/**
 * _strcat -  function that concatenates two strings.
 * @src: parameter to a src
 * @dest: parameter to append
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{

int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
i = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

return (dest);
}
