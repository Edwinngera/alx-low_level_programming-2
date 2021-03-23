#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of list and returns it's data.
 * @head: start of list.
 * Return: int, data in head node.
 *         Or 0, if list is empty.
 */

int pop_listint(listint_t **head)
{
listint_t *new = *head;
int new_data;
if (*head == NULL)
return (0);

*head = (*head)->next;
new_data = (new)->n;
free(new);
new = NULL;
return (new_data);

}
