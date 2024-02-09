#include "search_algos.h"

int binary_search_recurs(int *array, int l, int h, int value);

/**
 * advanced_binary - function that search for elements using binary search
 * @size:- size of the array
 * @array:- pointer to the array
 * @value:- value to search for
 * Return:- Always 0
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_recurs(array, 0, size - 1, value));
}


/**
 * binary_search_recurs - function that searches for element
 * @array:- pointer to the array
 * @l:- low bound
 * @h:- higher bound
 * @value:- element to search for
 * Return:- Always 0
 */

int binary_search_recurs(int *array, int l, int h, int value)
{
	int mid = (l + h) / 2;
	int k;

	if (l <= h)
	{
		printf("Searching in array: ");
		for (k = l; k <= h; k++)
		{
			if (k == h)
				printf("%d\n", array[k]);
			else
				printf("%d, ", array[k]);
		}

		if (array[mid] == value)
		{
			if (mid > 0 && array[mid - 1] == value)
				return (binary_search_recurs(array, l, mid, value));
			else
				return (mid);
		}
		else if (array[mid] < value)
		{
			return (binary_search_recurs(array, mid + 1, h, value));
		}
		else
			return (binary_search_recurs(array, l, mid - 1, value));
	}

	return (-1);
}
