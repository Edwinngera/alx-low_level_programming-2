#include "holberton.h"
/**
 * factorial - fuctorial of a number;
 * @n: the number input.
 * Return: Always 0.
 */
int factorial(int n)
{
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
