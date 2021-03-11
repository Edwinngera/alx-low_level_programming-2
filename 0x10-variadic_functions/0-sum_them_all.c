#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i;
int sum;
if (n == 0)
{
return (0);
}
sum = 0;
va_start(arg, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);

}
