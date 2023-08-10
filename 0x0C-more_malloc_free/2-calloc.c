#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  free 2 dimensional array
 * @grid: grid array
 * @height: height of array
 *
 * Description: function that frees a 2 dimensional grid previously created by
 * your alloc_grid function.
 */
void free_grid(void **grid, size_t height)
{
	size_t j;

	for (j = 0; j < height; j++)
		free(*(grid + j));
	free(grid);
}
/**
 * _calloc - calloc func 
 * @nmemb: nbr of elements.
 * @size: sizeof Element.
 *
 * Description: function that allocates memory for an array, using malloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **caloc;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	i = -1;
	caloc = malloc(sizeof(unsigned int) * nmemb);
	if (!caloc)
		return (NULL);
	while (++i < nmemb)
	{
		caloc[i] = malloc(sizeof(unsigned int) * size);
		if (!caloc[i])
			free_grid(caloc, i);
		caloc[i] = 0;
	}
	return (caloc);
}
