#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 *@a: is number a.
 *@b: is number b.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
