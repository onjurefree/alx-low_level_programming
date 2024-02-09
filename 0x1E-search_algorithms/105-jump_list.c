#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that search for element in linked list
 * @list:- pointer to head of the linked list
 * @size:- size of the array
 * @value:- value to search for
 * Return:- Always 0
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0;
	size_t k = 0;
	size_t w = (size_t)sqrt((double)size);
	listint_t *bef;

	if (!list)
		return (NULL);

	do {
		bef = list;
		k++;
		idx = k * w;

		while (list->next && list->index < idx)
			list = list->next;

		if (list->next == NULL && idx != list->index)
			idx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);
	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)bef->index, (int)list->index);

	for (; bef && bef->index <= list->index; bef = bef->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)bef->index, bef->n);
		if (bef->n == value)
		{
			return (bef);
		}
	}

	return (NULL);
}
