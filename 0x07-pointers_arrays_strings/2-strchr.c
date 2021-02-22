#include "holberton.h"
/**
 * _strchr - locates a character in string.
 * @s: string
 * @c: character
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return ((char *)s);
}
} while (*s++);
return (0);
}
