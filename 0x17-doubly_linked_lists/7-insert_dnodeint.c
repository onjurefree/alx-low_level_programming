#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at
* a given position
*
* @l: lead of the list
* @idex: index of the new node
* @n: value of the new node
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **l, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *lead;
unsigned int f;

new = NULL;
if (idx == 0)
new = add_dnodeint(l, n);
else
{
lead = *l;
f = 1;
if (lead != NULL)
while (lead->prev != NULL)
lead = lead->prev;
while (lead != NULL)
{
if (f == idx)
{
if (lead->next == NULL)
new = add_dnodeint_end(l, n);
else
{
new = malloc(sizeof(dlistint_t));
if (new != NULL)
{
new->n = n;
new->next = lead->next;
new->prev = lead;
lead->next->prev = new;
lead->next = new;
}
}
break;
}
lead = lead->next;
f++;
}
}
return (new);
}
