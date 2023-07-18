#include <stdio.h>
#include "main.h"

/**
 * main - Print fibonacci 
 *
 * Return: On success 0.
 */
int main(void)
{
	unsigned int n1;
	unsigned int n2;
	unsigned int fibo;
	int i;

	n1 = 1;
	n2 = 2;
	i = 0;
	printf("%u, %u, ",n1,n2);
	while (i < 50)
	{
		fibo = n1 + n2;
		printf("%u",fibo);
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
