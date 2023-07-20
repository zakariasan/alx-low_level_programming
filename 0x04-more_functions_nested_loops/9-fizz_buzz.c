#include <unistd.h>
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
* main - Fizz Buzz.
* Description : Write a program that prints the numbers from 1 to 100.
* Return Sucess
*/
int main(void)
{
	int c;
	int i;

	i = 0;
	while (++i < 99)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "FizzBuzz ", 9);
		else if (i % 3 == 0)
			write(1, "Fizz ", 5);
		else if (i % 5 == 0)
			write(1, "Buzz ", 5);
		else
		{
			_putnbr(i);
			_putchar(' ');
		}
	}
	write(1, "FizzBuzz\n", 9);
	return (0);
}
