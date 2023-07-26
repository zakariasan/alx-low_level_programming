#include "main.h"

/**
* rot13 - rot13
* @str: str.
*
* Description: function that encodes a string using rot13.
* Return: rot13 str
*/

char *rot13(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
				(str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
	}
	return (str);
}
