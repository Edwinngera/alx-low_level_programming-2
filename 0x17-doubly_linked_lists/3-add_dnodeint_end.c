#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of list.
 * @head: double pointer to head of list.
 * @n: data to store in node.
 * Return: address of the new node, or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new, *tmp;

  new = malloc(sizeof(dlistint_t));
  if (!new)
    {
      printf("Error: malloc failed\n");
      return (NULL);
    }
  new->n = n;
  new->next = NULL;
  new->prev = NULL;
  if (!*head)
    return (*head = new);
  tmp = *head;
  while (tmp->next)
    tmp = tmp->next;
  tmp->next = new;
  new->prev = tmp;
  return (new);
}
