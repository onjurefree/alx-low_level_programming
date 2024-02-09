#include "search_algos.h"

int binary_search_helper(int *array, size_t size, int value);
int recurs(int *array, size_t l, size_t r, int value);

/**
 * exponential_search - function that searches for element
 * @array:- pointer to the array
 * @size:- size of the array
 * @value:- value to dearch for
 * Return:- Always 0
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t l;
	size_t r = 1;

	if (!array || size == 0)
		return (-1);

	while (r < size && array[r] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", r, array[r]);
		r *= 2;
	}
	if (array[r] == value)
		return (r);

	l = r / 2;

	if (r >= size)
		r = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", l, r);

	return (recurs(array, l, r, value));
}

/**
 * recurs - function that devides the array
 * @array:- pointer to the array
 * @r:- first bound
 * @l:- second bound
 * @value:- value to search for
 * Return:- Always 0
 */

int recurs(int *array, size_t l, size_t r, int value)
{
	size_t w = l;
	size_t mid;

	if (l > r)
		return  (-1);

	printf("Searching in array: %d", array[w++]);

	while (w <= r)
	{
		printf(", %d", array[w++]);
	}
	printf("\n");

	mid = l + ((r - l) / 2);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] == value)
	{
		if (mid != 0)
			return (recurs(array, l, mid - 1, value));

		return (-1);
	}
	return (recurs(array, mid + 1, r, value));
}

/**
 * binary_search_helper - function that search in the sub arrays
 * @array:- pointer to the array
 * @size:- size of the array
 * @value:- value to search for
 * Return:- Always 0
 */

int binary_search_helper(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recurs(array, 0, size - 1, value));
}
