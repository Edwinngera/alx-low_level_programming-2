#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - alloates memory using malloc
 * @b:how much bits to use
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
char *s;
s = malloc(b);
if (s == NULL)
{
exit(98);
}
else
return (s);
}
