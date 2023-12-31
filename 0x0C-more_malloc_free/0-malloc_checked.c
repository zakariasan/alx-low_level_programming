#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of allocated memo.
 *
 * Description: function that allocates memory using malloc.
 * Return: 98 or ptr of memo
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
