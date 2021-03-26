#include <stdlib.h>
#include "holberton.h"

/**
 * get_endianness - determine endianness of system.
 * Return: int, 0 if big endian. 1, if little.
 */

int get_endianness(void)
{
int n;

n = 1;
return ((int)((char *)&n)[0]);
}
