#include "lists.h"

/**
* dlidtint - return the number of element in
* a double linked list
*
* @l: head of the list
* Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *l)
{
int lount;

lount = 0;

if (l == NULL)
return (lount);

while (l->prev != NULL)
l = l->prev;

while (l != NULL)
{
lount++;
l = l->next;
}
return (lount);
}
