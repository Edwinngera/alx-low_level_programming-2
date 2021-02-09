#include "holberton.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i;
char j;
i = 0;
while (i < 11)
{
for (j = 'a' ; j <= 'z' ; j++)
{
_putchar(j);
}
i++;
}
_putchar('\n');
}
