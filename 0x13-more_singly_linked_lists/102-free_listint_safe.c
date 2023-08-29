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
	listint_t *lst;
	size_t cnt;
	size_t i;

	cnt = 0;
	tmp_lst = *h;
	while (h && tmp_lst)
	{
		tmp_lst = tmp_lst->next;
		cnt++;
		i = -1;
		lst = *h;
		while (++i < cnt)
		{
			if (tmp_lst == lst)
			{
				free(lst);
				return (cnt);
			}
			lst = lst->next;
		}
		free(tmp_lst);
	}
	return (cnt);
}
