#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints elements of a list.
 * @h: head of linked list.
 * Return: size_t, number of nodes in list.
 */

size_t listint_len(const listint_t *h)
{
size_t q = 0;

while (h)
{
h = h->next;
q++;
}

return (q);
}
