#include "lists.h"
/**
 * add_nodeint_end - adds a node to end of list.
 * @head: start of list.
 * @n: int to add to new node.
 * Return: listint_t, address of new node.
 * Or NULL, on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_last_node;
listint_t *last = NULL;
new_last_node = malloc(sizeof(listint_t));
if (new_last_node == NULL)
return (NULL);


new_last_node->n = n;
new_last_node->next = NULL;
if (*head == NULL)
{
return (*head = new_last_node);

}
else
{
last = *head;
while (last->next)
last = last->next;
last->next = new_last_node;
}
return (*head);
}
