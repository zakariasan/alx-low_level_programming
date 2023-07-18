#include <stdio.h>
#include "main.h"

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
		printf("%d",fibo);
		n1 = n2;
		n2 = fibo;
		if (i++ != 46)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
