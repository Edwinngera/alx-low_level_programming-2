#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 *@s: - str variable
 * Return: Count.
 */
int _strlen(char *s)
{
int i = 0, count = 0;
while (s[i++] != '\0')
{
count += 1;
}
return (count);
}
