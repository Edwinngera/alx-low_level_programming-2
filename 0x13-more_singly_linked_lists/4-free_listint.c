#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- frees a list_t list.
 * @head: start of list.
 * Return: void
 */

void free_listint(listint_t *head)
{

listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
