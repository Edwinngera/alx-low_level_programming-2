#include "lists.h"

/**
 * *add_nodeint - adds a new node at beginning of list.
 * @head: head of list.
 * @n: int to add to new list.
 * Return: listint_t, address of the new element.
 * On failure, NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t  *new_node;
new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;

*head = new_node;
if (*head == NULL)
{
return (NULL);
}
return (*head);
}
