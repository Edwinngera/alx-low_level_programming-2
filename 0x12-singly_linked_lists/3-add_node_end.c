#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to end of list.
 * @head: start of list.
 * @str: string to add to new node.
 * Return: list_t, address of new node.
 * Or NULL, on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
size_t m;

m = 0;
n = malloc(sizeof(list_t));

if (n == NULL)
return (NULL);
while (str[m])
m++;
n->str = strdup(str);
n->len = m;
n->next = NULL;

if (*head == NULL)
return (*head = n);
else
{
list_t *lastNode = *head;
while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}
lastNode->next = n;
}
return (*head);
}
