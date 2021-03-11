#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator b/w the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/* creating va_list to store the variable argument list */
va_list list;
unsigned int i;

/* init valist for the number of arguments */
va_start(list, n);

/* loop through/access all arguments stored in the valist */
for (i = 0; i < n; i++)
{
if (i != n)
{
printf("%d", va_arg(list, unsigned int));
if (separator != NULL && i < (n - 1))
{
printf("%s", separator);
}
}
}
va_end(list);
printf("\n");
}
