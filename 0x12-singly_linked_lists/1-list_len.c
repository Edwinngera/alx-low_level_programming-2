#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints the number of elements in linked list.
 * @h: pointer to struct.
 * Return: length of struct.
 */

size_t list_len(const list_t *h)
{
size_t n;
n = 0;
while (h)
{
h = h->next;
n++;

}
return (n);
}
