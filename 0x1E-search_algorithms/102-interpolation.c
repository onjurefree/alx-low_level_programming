#include "search_algos.h"

/**
 * interpolation_search - function that search for value in array
 * @array:- pointer to the array
 * @size:- size of the array
 * @value:- value to search for
 * Return:- Always 0
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	int pos_value;
	size_t pos;


	if (array == NULL || size == 0)
	{
		return (-1);
	}
	pos = low + (((double)(high - low) / (
					array[high] - array[low])) * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (value - array[low]));
		pos_value = array[pos];

		printf("Value checked array[%ld] = [%d]\n", pos, pos_value);

		if (pos_value == value)
		{
			return (pos);
		}

		if (pos_value < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	if (pos > low)
		printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
