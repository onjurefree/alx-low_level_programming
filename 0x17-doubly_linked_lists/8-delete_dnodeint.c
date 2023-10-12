#include "lists.h"

/**
* delete_dnodeint_at_index - delete the node at index of a
* dlistint_t linked list
*
* @lead: lead of the list
* @index: index of the new node
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **lead, unsigned int index)
{
dlistint_t *l1;
dlistint_t *l2;
unsigned int f;

l1 = *lead;

if (l1 != NULL)
while (l1->prev != NULL)
l1 = l1->prev;
f = 0;

while (l1 != NULL)
{
if (f == index)
{
if (f == 0)
{
*lead = l1->next;
if (lead != NULL)
(*lead)->prev = NULL;
}
else
{
l2->next = l1->next;

if (l1->next != NULL)
l1->next->prev = l2;
}
free(l1);
return (1);
}
l2 = l1;
l1 = l1->next;
f++;
}
return (-1);
}
