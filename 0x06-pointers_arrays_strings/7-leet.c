#include "main.h"

/**
* leet - 1337 Code.
* @str: str.
*
* Description: func that encodes a string into 1337.
* Return: 1337 str
*/

char *leet(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
