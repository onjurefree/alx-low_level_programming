#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning
* of a dlistint_t list
*
* @lead: head of the list
* @n: value of the element
* Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **lead, const int n)
{
dlistint_t *new;
dlistint_t *l;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;
l = *lead;

if (l != NULL)
{
while (l->prev != NULL)
l = l->prev;
}

new->next = l;

if (l != NULL)
l->prev = new;

*lead = new;

return (new);
}
