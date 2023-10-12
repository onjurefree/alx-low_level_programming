#include "lists.h"

/**
* add_dnodeint_end - add a new node at the end
* of a dlistint_t list
*
* @lead: lead of the list
* @n: value of the element
* Return: the address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **lead, const int n)
{
dlistint_t *l;
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

l = *lead;

if (l != NULL)
{
while (l->next != NULL)
l = l->next;
l->next = new;
}
else
{
*lead = new;
}

new->prev = l;

return (new);
}
