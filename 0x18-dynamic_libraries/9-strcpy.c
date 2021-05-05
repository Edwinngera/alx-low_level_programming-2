#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies a string to a buffer.
 * @dest: buffer.
 * @src: string to copy.
 * Return: char pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
