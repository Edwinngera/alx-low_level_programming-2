#include "holberton.h"
/**
 * _memset - function fills the first n bytes of the memory f s with b.
 * @b: the the item to set to memory s;
 * @s: the size of the memory to print
 * @n: bytes of the memory area
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{

int max;
int i;
for (i = 0, max = n; i != max; i++)
{
s[i] = b;
}
return (s);
}
