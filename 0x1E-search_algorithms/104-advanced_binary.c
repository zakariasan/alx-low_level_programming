#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted.
 * @array: Pointer to the first element of the array.
 * @left: Left index of the array.
 * @right: Right index of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{

	size_t mid = 0;
	size_t i = 0;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");

		i = left;
		for (; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, left,
							mid, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binary_recursive(array, mid + 1,
						right, value));
		}
		else
		{
			return (advanced_binary_recursive(array, left, mid - 1,
						value));
		}
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value in the array, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

