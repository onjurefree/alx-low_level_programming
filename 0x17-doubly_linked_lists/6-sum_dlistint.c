#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (w)
* of a doubly linked list
*
* @lead: lead of the list
* Return: sum of the data
*/
int sum_dlistint(dlistint_t *lead)
{
int sum;

sum = 0;

if (lead != NULL)
{
while (lead->prev != NULL)
lead = lead->prev;

while (lead != NULL)
{
sum += lead->n;
lead = lead ->next;
}
}
return (sum);
}
