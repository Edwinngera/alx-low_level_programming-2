#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list.
 * @h: head of linked list.
 * Return: size_t, number of nodes in list.
 */

size_t print_listint(const listint_t *h)
{
size_t q = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
q++;
}

return (q);
}
