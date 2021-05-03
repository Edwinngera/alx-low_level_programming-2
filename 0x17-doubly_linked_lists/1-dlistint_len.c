#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in linked list.
 * @h: takes in the nodes.
 * Return: the count.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h)
{
if (h->n == 0)
return (0);
else
{
h = h->next;
count++;
}
}
return (count);
}
