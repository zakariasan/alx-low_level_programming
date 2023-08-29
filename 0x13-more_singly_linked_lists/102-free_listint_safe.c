#include "lists.h"

/**
 * free_listint_safe - Time to frees all nodes  with safe.
 * @h: head node
 *
 * Description: function that frees a List.
 * Return: nbr of nodes or 0.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp_lst;
	size_t cnt;

	cnt = 0;
	tmp_lst = *h;
	while (h && tmp_lst)
	{
		tmp_lst = tmp_lst->next;
		if (*h - tmp_lst)
		{
			*h = tmp_lst;
			cnt++;
		}
		free(*h);
	}
	return (cnt);
}
