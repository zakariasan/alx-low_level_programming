#include "hash_tables.h"

/**
 * key_index - generate index from table
 * @size: size of the hash table
 * @key: string to hash
 *
 * Return: index of str
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long int j;

	i = 0;
	j = i;
	while (key[i])
		j += key[i++];
	return (j % size);
}
