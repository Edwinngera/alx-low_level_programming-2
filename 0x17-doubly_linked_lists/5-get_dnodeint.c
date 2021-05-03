#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head node of doubly linked list
 * @index: index of node to return
 *
 * Return: address of required node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp;

if (head == NULL)
return (NULL);
tmp = head;
while (i < index)
{
tmp = tmp->next;
i++;
if (tmp == NULL)
return (NULL);
}
return (tmp);
}
