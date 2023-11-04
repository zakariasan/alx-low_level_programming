#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
/**
 * hash_table_set - func that adds an elem to the hash table.
 * @ht:hash_table
 * @key: the key of ht
 * @value: value of hash
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	unsigned long int i;
	hash_node_t *tmp;
	char *value_tmp;

	if (strlen(key) == 0 || !ht || value == NULL || *key == '\0')
		return (0);
	value_tmp = strdup(value);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	i = idx;

	while (i < ht->size)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_tmp;
			return (1);
		}
		i++;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (0);
	tmp->key = strdup(key);
	tmp->value = value_tmp;
	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}
