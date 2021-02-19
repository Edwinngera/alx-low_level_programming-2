#include "holberton.h"
/**
 * reverse_array - function that array numbers
 * @a: paramater for array
 * @n: paramater for array count
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int start;
start = 0;

while (start < n)
{
int temp = a[start];
a[start] = a[n];
a[n] = temp;
start++;
n--;
}
}


