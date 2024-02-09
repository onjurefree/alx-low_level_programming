#include "search_algos.h"

/**
 * linear_search - function that search for given value in array
 * @array:- pointer to array to search
 * @size:- size of the array
 * @value:- the value to search for
 * Return:- Always 0
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (!array)
	{
		return (-1);
	}

	for (k = 0; k < size; k++)
	{
		if (array[k] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
			return (k);
		}
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	}

	return (-1);
}
