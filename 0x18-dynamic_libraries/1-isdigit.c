
#include "holberton.h"
/**
 * _isdigit - check if the input is int or not.
 *@c: takes the input.
 * Return: Always 0 or 1
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 59)
{
return (1);
}
else
{
return (0);
}
}
