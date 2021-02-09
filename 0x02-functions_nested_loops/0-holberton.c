#include "holberton.h"
/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
char m[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
unsigned int c;
for (c = 0 ; c < sizeof(m) ; c++)
{
_putchar(m[c]);
}
_putchar('\n');
return (0);
}
