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
 * main - Print fibonacci 
 *
 * Return: On success 0.
 */
int main(void)
{
	int n1;
	int n2;
	int fibo;
	int i;

	n1 = 1;
	n2 = 2;
	i = 0;
	_putnbr(n1);
	_putchar(',');
	_putchar(' ');
	_putnbr(n2);
	_putchar(',');
	_putchar(' ');
	while (i < 50)
	{
		fibo = n1 + n2;
		_putnbr(fibo);
		n1 = n2;
		n2 = fibo;
		if (i++ != 49)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
