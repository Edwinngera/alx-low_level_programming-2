#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: 1 to 9 except 2 and 4.
 */
void print_most_numbers(void)
{
int k = '0';
while (k <= '9')
{
if (k == '2' || k == '4')
{
k++;
continue;
}
_putchar(k);
k++;
}
_putchar('\n');
}
