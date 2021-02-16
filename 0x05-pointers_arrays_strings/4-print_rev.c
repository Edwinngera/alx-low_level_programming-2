#include "holberton.h"
/**
 * print_rev - reverses a string
 *@s: - holds the variable for the string
 * Return: Always 0.
 */
void print_rev(char *s)
{
int k;
for (k = 0; s[k] != 0; k++)
{

}
for (k = k - 1; k >= 0; k--)
{
_putchar(s[k]);
}
_putchar('\n');
}
