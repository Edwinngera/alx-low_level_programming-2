#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - check the code for Holberton School students.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
s = malloc((size + 1) * sizeof(c));
if (s == NULL)
{
return (NULL);
}

i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
