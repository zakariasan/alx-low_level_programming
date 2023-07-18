#include "main.h"

/**
 * print_to_98 - Print nbr to 98.
 * @a: start from nbr.
 */
void print_to_98(int n)
{
	char tmp;

	while (n <= 98)
	{
		if (n < 0)
		{
			_putchar('-');
			tmp = -n;
		}
		else
			tmp = n;
		if ((tmp / 10) != 0)
		{	
			_putchar(tmp / 10 + '0');
			_putchar(tmp % 10 + '0');
		}
		else
			_putchar(tmp + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
