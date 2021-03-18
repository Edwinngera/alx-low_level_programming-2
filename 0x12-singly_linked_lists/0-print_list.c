#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints the lists.
 * @h: pointer to the list.
 * Return: size_t, number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
size_t count = 0;


while (h)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
