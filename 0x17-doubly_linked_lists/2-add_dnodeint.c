#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to head node of list
 * @n: int variable to initialize new node
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

  dlistint_t *tmp, *newNode;
  newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

  if (!newNode)
    {
      printf("Error: malloc failed!");
      return (NULL);
    }

  newNode->n = n;
  newNode->prev = NULL;
  tmp = *head;
  if (tmp == NULL)
    {
      newNode->next = NULL;
      *head = newNode;
      return (newNode);

    }
  newNode->next = tmp;
  tmp->prev = newNode;
  *head = newNode;
  return (newNode);
}
