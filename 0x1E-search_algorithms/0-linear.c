#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
* linear_search - function that searches for a value in an array.
* @array: array.
* @size: size of array.
* @value: searchy value
* Return: integer
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size && array)
	{
		if (array[i] == value)
		{
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i,
					array[i]);
		}
		i++;
	}
	return (-1);
}
