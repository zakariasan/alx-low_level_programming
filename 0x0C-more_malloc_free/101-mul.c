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
 * multy - mult digits
 * @num1: str argument nb1
 * @num2: str argument nb2
 *
 * Description: func to mult digit by digit
 * Return: On success a nbr. else NULL
 */
char *multy(char *num1, char *num2)
{
	int *result;
	int i = 0;
	int j;
	char *resultStr;
	int idx = 0;
	int next;

	result = (int *)malloc((_strlen(num1) + _strlen(num2) + 1) * sizeof(int));
	while (i <= _strlen(num1) + _strlen(num2))
		result[i++] = 0;
	if (result == NULL)
		return (NULL);
	for (i = _strlen(num1) - 1; i >= 0; i--)
	{
		next = 0;
		for (j = _strlen(num2) - 1; j >= 0; j--)
		{
			next += (num1[i] - '0') * (num2[j] - '0');
			result[i + j + 1] = next % 10;
			next /= 10;
		}
		if (next > 0)
			result[i + j + 1] += next;
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
