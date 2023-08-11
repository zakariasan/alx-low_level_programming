#include <stdlib.h>
#include "main.h"

/**
* _puts - prints a string.
* @str: string to print.
*
* Description: unction that prints a string, followed by a new line, to stdout.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * _strlen - length of str
 * @str: str argument
 *
 * Description: func calc lenth of str
 * Return: On success a nbr. else 0
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
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

	if (!nmemb || !size)
		return (NULL);
	caloc = malloc(size * nmemb);
	if (!caloc)
		return (NULL);
	i = -1;
	while (++i < (nmemb * size))
		((char *)caloc)[i] = 0;
	return (caloc);
}
/**
 * multy - mult digits
 * @num1: str argument nb1
 * @num2: str argument nb2
 *
 * Description: func to mult digit by digit
 * Return: On success a nbr. else NULL
 */
char *multy(char *num1, char *num2)
{
	int *result = (int *)calloc(_strlen(num1) + _strlen(num2), sizeof(int));
	int i;
	int j;
	char *resultStr;
	int idx = 0;

	if (result == NULL)
		return (NULL);
	for (i = _strlen(num1) - 1; i >= 0; i--)
	{
		for (j = _strlen(num2) - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j + 1] = result[i + j + 1] % 10;
			result[i + j] += result[i + j + 1] / 10;
		}
	}
	j = 0;
	while (j < (_strlen(num1) + _strlen(num2) - 1) && result[j] == 0)
		j++;
	resultStr = (char *)malloc(((_strlen(num1) + _strlen(num2)) -  j + 1) *
			sizeof(char));
	if (resultStr == NULL)
		return (NULL);
	for (i = j; i < (_strlen(num1) + _strlen(num2)); i++)
		resultStr[idx++] = result[i] + '0';
	resultStr[idx] = '\0';

	free(result);
	return (resultStr);
}

/**
 * _isalpha - checks digit or not
 * @str: str argument
 *
 * Description:  checks for alphabetic character.
 * Return: On success 1. else -1
 */
int _isalpha(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - mult func.
 * @ac: argument count
 * @av: argument vector
 *
 * Description: program that multiplies two positive numbers.
 * Return: success 0 or 98
 */
int main(int ac, char **av)
{
	char *res;

	if (ac != 3 || _isalpha(av[1]) || _isalpha(av[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	res = multy(av[1], av[2]);
	_puts(res);
	return (0);
}
