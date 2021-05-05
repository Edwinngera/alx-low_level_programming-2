#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: takes in string:
 * Return: Always 0.
 */
void _puts(char *s)
{
int c;
for (c = 0; s[c] != 0; c++)
{
_putchar(s[c]);
}
_putchar('\n');
}
