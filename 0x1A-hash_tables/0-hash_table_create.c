#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - table of hash tables
 * @size: size of the hash table
 *
 * Return: hash_table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (!hash_table || !hash_table->array)
		return (NULL);
	hash_table->size = size;

	i = 0;
	while (i < size)
		hash_table->array[i++] = NULL;
	return (hash_table);
}
