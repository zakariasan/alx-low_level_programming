#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	if (ac != 3 || _isalpha(av[1]) || _isalpha(av[2]))
	{
		printf("Error\n");
		exit(98);
	}
	mul = atol(av[1]) * atol(av[2]);
	printf("%lu\n", mul);
	return (0);

}
