#include <stdio.h>

/**
 * _atoi - converts string to integer.
 * @s: string input.
 * Return: int, converted string.
 */

int _atoi(char *s)
{
int i, sign, num;

i = num = 0;
sign = 1;

while (*(s + i))
{
if (*(s + i) == '-')
sign *= -1;
if (*(s + i) >= '0' && *(s + i) <= '9')
{
num = num * 10 + (*(s + i) - '0');
if (*(s + i + 1) == ' ')
break;
}
i++;
}
num *= sign;
return (num);
}
