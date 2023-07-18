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
	if (n >= 10)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	_putchar(n % 10 + '0');
	return (n);
}
