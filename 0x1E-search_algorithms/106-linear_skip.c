#include "search_algos.h"

skiplist_t *search_list_end(skiplist_t *check);
skiplist_t *recurs_search(skiplist_t *check, skiplist_t *stp, int value);
skiplist_t *direct_recurs(skiplist_t *check, int value);

/**
 * direct_recurs - function that searches for value
 * @check:- pointer to head node
 * @value:- value to search for
 * Return:- Always 0
 */

skiplist_t *direct_recurs(skiplist_t *check, int value)
{
	skiplist_t *end = NULL;

	if (check->express == NULL)
	{
		end = search_list_end(check);
		printf("Value found between indexes [%ld] and [%ld]\n",
				check->index, end->index);

		return (check);
	}

	printf("Value checked at index [%ld] = [%d]\n",
			check->express->index, check->express->n);

	if (check->express->n >= value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n",
				check->index, check->express->index);

		return (check);
	}

	return (direct_recurs(check->express, value));
}

/**
 * recurs_search - function that search for value
 * @check:- pointer to head node
 * @stp:- last node
 * @value:- value to search for
 * Return:- Always 0
 */

skiplist_t *recurs_search(skiplist_t *check, skiplist_t *stp, int value)
{
	if (check == stp)
	{
		if (stp != NULL && stp->n == value)
		{
			return (stp);
		}
		return (NULL);
	}

	printf("Value checked at index [%ld] = [%d]\n", check->index, check->n);

	if (check->n == value)
		return (check);

	return (recurs_search(check->next, stp, value));
}

/**
 * search_list_end - function that search for end node
 * @check:- pointer to the head node
 * Return:- Always 0
 */

skiplist_t *search_list_end(skiplist_t *check)
{
	if (check->next == NULL)
		return (check);

	return (search_list_end(check->next));
}

/**
 * linear_skip - func tion that search for element in skiplist
 * @list:- pointer to head node
 * @value:- value to search for
 * Return:- Always 0
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *areaone = NULL;

	if (!list)
		return (NULL);

	areaone = direct_recurs(list, value);

	if (areaone->n == value)
		return (areaone);

	return (recurs_search(areaone, areaone->express, value));
}
