#include "holberton.h"
/**
 * _memcpy - copy size n from src to dest
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: size of memory to print
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

int i;
int max;
for (i = 0, max = n; i < max; i++)
{
dest[i] = src[i];
}
return (dest);
}
