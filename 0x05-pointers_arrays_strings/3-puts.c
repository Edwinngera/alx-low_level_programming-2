#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: takes in string:
 * Return: Always 0.
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != 0; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
