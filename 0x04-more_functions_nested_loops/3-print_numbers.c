#include "holberton.h"
/**
 * print_numbers - prints 2 to 20.
 * @c: counter variable.
 * _putchar: prints list numbers.
 */
void print_numbers(void)
{
int c = '0';
for (c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}
