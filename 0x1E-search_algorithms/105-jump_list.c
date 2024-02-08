#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the first node where value is located,
 *         or NULL if value is not found or list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current = list, *prev = NULL;
	size_t jump, i;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);

	while (current != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; current->next != NULL && i < jump; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index,
				current->n);

		if (current->next == NULL || current->n >= value)
			break;

		jump += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
			current->index);

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
