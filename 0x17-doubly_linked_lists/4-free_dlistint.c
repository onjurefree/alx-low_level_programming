#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list.
* @lead: pointer to lead of the list
* Return: nothing
**/
void free_dlistint(dlistint_t *lead)
{
if (lead == NULL)
return;

while (lead->next)
{
lead = lead->next;
free(lead->prev);
}
free(lead);
}
