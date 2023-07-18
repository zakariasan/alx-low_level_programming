#include <stdio.h>
#include "main.h"

/**
 * main - Print fibonacci
 *
 * Return: On success 0.
 */
int main(void)
{
	long int n1;
	long int n2;
	long int fibo;
	unsigned long int sum;
	int i;

	n1 = 1;
	n2 = 2;
	i = 0;
	while (i < 40)
	{
		if (n1 < 4000000 && (n1 % 2) == 0)
			sum += n1;
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
