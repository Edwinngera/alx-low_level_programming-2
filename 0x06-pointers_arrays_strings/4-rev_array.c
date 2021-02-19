#include "holberton.h"

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


