#include <stdio.h>
#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string srouce.
* @c: char to search for.
*
* Description : function that locates a character in a string.
* Return: src in char pointer.
*/

char *_strchr(char *s, char c)
{

	while (*s++)
	{
		if (*(s - 1) == c)
			return (s - 1);
	}
	return (NULL);
}