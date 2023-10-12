#include "lists.h"

/**
 * print_dlistint - print dlinked list.
 * @h: head.
 *
 * Description: function that prints all the elements of a dLinked List.
 * Return: nbr of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (!h->prev)
	{
		while (h->next)
		{
			printf("%d", h->n);
			size++;
			h = h->next;
		}
	}
	else if (!h->next)
	{
		while (h->prev)
		{
			printf("%d", h->n);
			size++;
			h = h->prev;
		}

	}
	return (size);
}
