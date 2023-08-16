#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 * @ac: nbr of argument
 * @av: vector of args
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int (*f)(int, int);
	int value;

	if (ac != 4)
		op_error(98);

	if (strlen(av[2]) != 1)
		op_error(99);

	f = get_op_func(av[2]);

	if (!f)
		op_error(99);
	value = f(atoi(av[1]), atoi(av[3]));
	printf("%d\n", value);
	return (0);
}
