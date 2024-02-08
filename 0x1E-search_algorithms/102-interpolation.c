#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * Interpolation search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low +
			(((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos,
					array[pos]);
			return (pos);
		}
		else if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos,
					array[pos]);
			low = pos + 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos,
					array[pos]);
			high = pos - 1;
		}
	}

	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
