#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
while(i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
