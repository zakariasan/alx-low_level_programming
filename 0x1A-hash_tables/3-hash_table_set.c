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
	hash_node_t *tmp;
	char *key_tmp, *value_tmp;

	if (strlen(key) == 0 || !ht || key == NULL)
		return (0);
	key_tmp = strdup(key);
	value_tmp = strdup(value);
	if (!key_tmp || !value_tmp)
		return (0);
	idx = key_index((unsigned char *)key_tmp, ht->size);
	tmp = ht->array[idx];
	if (!tmp)
	{
		tmp = malloc(sizeof(hash_node_t));
		if (!tmp)
		{
			free(key_tmp);
			free(value_tmp);
			return (0);
		}
		tmp->value = value_tmp;
		tmp->next = NULL;
		tmp->key = key_tmp;
		ht->array[idx] = tmp;
		return (1);
	}
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_tmp;
			free(key_tmp);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
	{
		free(key_tmp);
		free(value_tmp);
		return (0);
	}
	tmp->value = value_tmp;
	tmp->key = key_tmp;
	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;
	return (1);
}
