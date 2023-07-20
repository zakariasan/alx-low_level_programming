#include "main.h"

/**
 * print_number - Print nbr.
 * @n : nbr to print.
 */
void print_number(int n)
{
	if (n >= -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		_putchar(n + '0');
}
