#include "main.h"

/**
 * print_last_digit -  Print Last digit.
 * @n: int value
 *
 * Description: Print last digit of nbr.
 * Return: On success last degit(n).
 */
int print_last_digit(int n)
{
	long int tmp;

	if (n < 0)
	{
		tmp = -n;
		_putchar((tmp % 10) + '0');
		return (tmp % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
