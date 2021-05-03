#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements.
 * @h: pointer to the node.
 *
 * Return: address of the element or NULL if it failed
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
if (h == 0)
{
printf("0 (nill)\n");
}
else
{
printf("%d \n", h->n);
h = h->next;
count++;
}
}
return (count);
}
