#include "holberton.h"

void print_rev(char *s)
{
  int k;
  for (k = 0; s[k] != 0; k++)
    {

}
  for (k = k - 1; k >= 0; k--)
    {
      _putchar(s[k]);
}
  _putchar('\n');
}
