#include "main.h"

/**
 * print_number - Print nbr.
 * @nbr : nbr to print.
 */
void print_number(int nbr)
{

	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		print_number(nbr / 10);
		print_number(nbr % 10);
	}
	else
		_putchar(nbr + '0');
}
