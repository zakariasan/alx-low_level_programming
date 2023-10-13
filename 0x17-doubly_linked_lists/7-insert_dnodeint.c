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

	if (!h)
		return (NULL);
	if (idx != 0)
	{
		while (tmp && i < idx)
		{
			tmp = tmp->next;
			i++;
		}
		if (!tmp && i < idx)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (!new)
		return (NULL);

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		new->prev = tmp->prev;
		new->next = tmp;
		if (tmp->prev)
			tmp->prev->next = new;
		tmp->prev = new;
	}
	return (new);
}
