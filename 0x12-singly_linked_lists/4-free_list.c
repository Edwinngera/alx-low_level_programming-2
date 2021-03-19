#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: start of list.
 * Return: void
 */

void free_list(list_t *head)
{

  list_t *new, *next;
  new = head;
  while(new != NULL)
    {
      next = new->next;
      free(new->str);
      free(new);
      new = next;
}
}
