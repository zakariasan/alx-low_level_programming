#include "search_algos.h"
#include <math.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))

/**
* jump_search - function that searches for a value in an array Jump search.
* @array: array
* @size: size of array.
* @value: searchy value
* Return: integer
*/

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = sqrt(size);
	size_t cnt = 0;

	while (array[MIN(start, size) - 1] < value && array &&
			(int)start < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start,
				array[start]);
		start = end;
		end = end + sqrt(size);

		if (start >= size)
			break;
	}
	
	end = (end < size) ? end : size;
	printf("Value found between indexes [%ld] and [%ld]\n", start,
			end - 1);
	cnt = start;
	while (cnt < end)
	{
		printf("Value checked array[%ld] = [%d]\n", cnt, array[cnt]);
		if (array[cnt] == value)
			return (cnt);
		cnt++;
	}
	return (-1);
}
