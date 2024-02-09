#include "search_algos.h"
#include <math.h>

int helper(int *array, size_t size, size_t fin, size_t idx, int value);
int recurse_search(int *array, size_t size, size_t stp, size_t idx, int value);

/**
 * jump_search - function that search fo value using jump search
 * @array:- pointer to the array to search
 * @size:- size of the array
 * @value:- value to search for
 * Return:- Always 0
 */

int jump_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recurse_search(array, size, sqrt(size), 0, value));
}

/**
 * recurse_search - function that search for element
 * @array:- pointer to the array
 * @size:- size of the array
 * @stp:- jump area
 * @idx:- index
 * @value:- value to search for
 * Return:- Always 0
 */

int recurse_search(int *array, size_t size, size_t stp, size_t idx, int value)
{
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	if (((idx + stp < size) && array[idx + stp] < value))
		return (recurse_search(array, size, stp, idx + stp, value));

	printf("Value found between indexes [%ld] and [%ld]\n", idx, (idx + stp));
	return (helper(array, size, idx + stp, idx, value));
}

/**
 * helper - function that search in the subarrays
 * @array:- pointer to the array
 * @size:- size of array
 * @fin:- end of search area
 * @idx:- start
 * @value:- value to search for
 * Return:- Always 0
 */

int helper(int *array, size_t size, size_t fin, size_t idx, int value)
{
	if (idx >= size || idx > fin || array[idx] > value)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	if (array[idx] == value)
		return (idx);

	return (helper(array, size, fin, idx + 1, value));
}
