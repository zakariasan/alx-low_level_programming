#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

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
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int resultLen = len1 + len2;
	int *result = (int *)calloc(resultLen, sizeof(int));
	int i;
	int j;
	int startIdx = 0;
	char *resultStr;
	int idx = 0;
	int sum;
	int mul;

	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + mul;
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	while (startIdx < resultLen - 1 && result[startIdx] == 0)
		startIdx++;
	resultStr = (char *)malloc((resultLen - startIdx + 1) * sizeof(char));
	if (resultStr == NULL)
		return (NULL);
	for (i = startIdx; i < resultLen; i++)
		resultStr[idx++] = result[i] + '0';
	resultStr[idx] = '\0';

	free(result);
	return (resultStr);
}

/**
 * _digit - checks digit or not
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
		printf("Error\n");
		exit(98);
	}
	res = multy(av[1], av[2]);

	printf("%s\n", res);
	return (0);
}
