#include "lists.h"

/**
 * dlistint_len - size of dLlist
 * @h: head.
 *
 * Description: function that prints all the elements of a dLinked List.
 * Return: nbr of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	if (!h->prev)
	{
		while (h)
		{
			size++;
			h = h->next;
		}
	}
	else if (!h->next)
	{
		while (h)
		{
			size++;
			h = h->prev;
		}
	}
	return (size);
}
