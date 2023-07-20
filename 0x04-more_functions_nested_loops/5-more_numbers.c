#include "main.h"

/**
 * _putnbr - Print nbr.
 * @nbr:nbr to print.
 */
void _putnbr(int nbr)
{
	int i;

	i = 10;
	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}
	while (nbr / i)
		i = i * 10;
	i = i / 10;
	while (i > 1)
	{
		_putchar((nbr / i) + '0');
		nbr = nbr % i;
		i = i / 10;
	}
	_putchar(nbr + '0');
}

/**
* more_numbers - Print nbrs.
* Description : function that prints the numbers
*/
void more_numbers(void)
{
	int c;
	int i;

	i = -1;
	while (++i < 10)
	{
		c = 0;
		while (c <= 14)
			_putnbr(c++);
		_putchar('\n');
	}
}
