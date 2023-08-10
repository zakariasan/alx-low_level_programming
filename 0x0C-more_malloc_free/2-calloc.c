#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - calloc func
 * @nmemb: nbr of elements.
 * @size: sizeof Element.
 *
 * Description: function that allocates memory for an array
 * using malloc.
 * Return: memo set to zero with nmemb elements or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *caloc;
	unsigned int i;
	int *ptr;

	i = -1;
	if (!nmemb || !size)
		return (NULL);
	caloc = malloc(sizeof(size) * nmemb);
	if (!caloc)
		return (NULL);
	ptr = caloc;
	while (++i < nmemb)
		ptr[i] = 0;
	return (caloc);
}
