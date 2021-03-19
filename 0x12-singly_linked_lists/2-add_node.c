#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at beginning of list.
 * @head: head of list.
 * @str: string to add to new list.
 * Return: list_t, address of the new element.
 * On failure, NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
size_t m;
list_t *n;
m = 0;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
while (str[m])
m++;

n->str = strdup(str);
n->len = m;
n->next = NULL;

n->next = *head;
*head = n;
if (*head == NULL)
return (NULL);
return (*head);
}
