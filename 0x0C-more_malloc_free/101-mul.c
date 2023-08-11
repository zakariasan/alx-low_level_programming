#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#define MAX_DIGITS 500

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
	int resultLen;
	int *result;
	int idx = 0;
	int mul;
	int sum;
	char *resultStr;

	resultLen = len1 + len2;
	result = (int *)calloc(resultLen, sizeof(int));
	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + mul;
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	resultStr = (char *) malloc((resultLen + 1) * sizeof(char));
	if (!resultStr)
		return (NULL);
	for (int i = 0; i < resultLen; i++)
	{
		if (idx == 0 && result[i] == 0)
			continue;
		resultStr[idx++] = result[i] + '0';
	}
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
	unsigned long  mul;
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
