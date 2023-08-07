#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid -  2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Description: function that returns a pointer to a 2 dimensional array of
 * integers.
 * Return: NULL or array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	i = -1;
	arr = (int **) malloc(sizeof(int) * height);
	if(!arr)
		return (NULL);
	while(++i < height)
	{
		*(arr + i) = (int *) malloc(sizeof(int) * width);
		if (!(arr + i))
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

