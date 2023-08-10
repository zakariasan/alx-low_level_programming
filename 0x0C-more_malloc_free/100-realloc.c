#include <stdlib.h>
#include "main.h"

/**
 * _realloc - realloc func.
 * @ptr: memory targeted
 * @old_size: old memo size.
 * @new_size: new memo size.
 *
 * Description:function that reallocates a memory block using malloc and free 
 * Return: the pointer to the newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realoc;
	unsigned int i;

	if (old_size == new_size || !ptr)
		return (ptr);
	if (new_size <= 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		realoc = malloc(new_size);
		if (!realoc)
			return (NULL);
		i = -1;
		while (i < new_size)
		{
			while (++i < old_size)
				((char *)realoc)[i] = ((char *)ptr)[i];
			((char *)realoc)[i] = 0;
		}
		return (realoc);
	}
	return (ptr);
}
