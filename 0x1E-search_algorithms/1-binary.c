#include "search_algos.h"

void print(int *array, size_t leftvalue, size_t rightvalue);

/**
 * binary_search - function that uses binary search to search for value
 * @array:- pointer to array to search
 * @size:- size of the array
 * @value:- the value to search for
 * Return:- Always 0
 */

int binary_search(int *array, size_t size, int value)
{
	size_t leftvalue = 0;
	size_t rightvalue = size - 1;
	size_t mid;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (leftvalue <= rightvalue)
	{
		mid = leftvalue + (rightvalue - leftvalue) / 2;

		print(array, leftvalue, rightvalue);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			leftvalue = mid + 1;
		}
		else
		{
			rightvalue = mid - 1;
		}
	}

	return (-1);
}

/**
 * print - function that print array elements
 * @array:- pointer to the array to print
 * @leftvalue:- where to start
 * @rightvalue:- ending point
 */

void print(int *array, size_t leftvalue, size_t rightvalue)
{
	size_t k;

	printf("Searching in array: ");
	for (k = leftvalue; k < rightvalue + 1; k++)
	{
		if (k == rightvalue)
		{
			printf("%d", array[k]);
		}
		else
		{
			printf("%d, ", array[k]);
		}
	}
	printf("\n");
}
