#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of num
 * @k:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int k)
{
int m;
int n;
m = k % 10;
if (k < 0)
{
k = -k;
n = k % 10;
_putchar(n + '0');
return (n);
}
else
{
_putchar(m + '0');
return (m % 10);
}
}
