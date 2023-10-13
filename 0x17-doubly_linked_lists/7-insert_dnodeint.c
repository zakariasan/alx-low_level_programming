#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node.
 * @h: head.
 * @idx: index of node.
 * @n: nbr.
 *
 * Description: function that inserts a new node at a given position.
 * Return: NULL or node adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	if (idx == i)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	new->n = n;

	while (tmp)
	{
		if (i == idx)
		{
			if (!tmp->next)
				add_dnodeint_end(h, n);
			else
			{
				new->next = tmp;
				new->prev = tmp->prev;
				tmp->prev = new;
				tmp = tmp->prev->prev;
				tmp->next = new;
			}
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
