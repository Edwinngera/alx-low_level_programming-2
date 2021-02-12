#include "holberton.h"
#include <ctype.h>
/**
 * _isupper - check the code for upper and lower case.
 *@c: input.
 * Return: Always 0.
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}

}
