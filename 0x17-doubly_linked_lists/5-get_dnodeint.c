#include "lists.h"

/**
* get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
* @lead: pointer to lead of the list
* @index: index of the node to search for, starting from 0
* Return: nth node or null
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *lead, unsigned int index)
{
unsigned int size;
dlistint_t *tmp;

size = 0;
if (lead == NULL)
return (NULL);

tmp = lead;
while (tmp)
{
if (index == size)
return (tmp);
size++;
tmp = tmp->next;
}
return (NULL);
}
