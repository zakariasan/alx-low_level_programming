#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - that prints a hash table.
 * @ht: hash_table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp_1;
	hash_node_t *tmp_2;

	if (!ht)
		return;
	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		tmp_1 = tmp;
		while (tmp_1)
		{
			tmp_2 = tmp_1->next;
			free(tmp_1->key);
			free(tmp_1->value);
			free(tmp_1);
			tmp_1 = tmp_2;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
