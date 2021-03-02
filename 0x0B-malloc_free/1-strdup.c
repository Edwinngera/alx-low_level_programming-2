#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: argument for array
 * Return: Always 0.
 */
char *_strdup(char *str)
{
unsigned int i;
unsigned int j;
char *arr;
arr = malloc(sizeof(str + 1));

for (i = 0; i <= sizeof(str); i++)
{
if (str == NULL)
{
return (NULL);
}
j = 0;
while (j <= sizeof(arr))
{
arr[j] = str[i];
i++;
j++;
}
}
arr[i] = '\0';
return (arr);
}
