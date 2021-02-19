#include "holberton.h"


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
