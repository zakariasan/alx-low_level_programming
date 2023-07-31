#include "main.h"

/**
* _memcpy - copies memory area.
* @dest: memo area.
* @src: str to cpy.
* @n: first n bytes of memo to cpy.
*
* Description :function that copies memory area.
* Return: dest pointer.
*/

char *_strchr(char *s, char c)
{

	while (*(s++))
		if (*s == c)
			return (s);
	return (0);
}
