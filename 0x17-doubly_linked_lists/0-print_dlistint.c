#include "lists.h"

/**
* print_dlistint - print all the element of a
* dlistint_t list
*
* @l: head of the list
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *l)
{
int lount;

lount = 0;

if (l == NULL)
return (lount);

while (l != NULL)
{
printf("%d\n", l->n);
lount++;
l = l->next;
}
return (lount);
}
