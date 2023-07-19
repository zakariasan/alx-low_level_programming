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
	int i;

	n1 = 1;
	n2 = 2;
	i = 0;
	while (i < 98)
	{
		if (i < 97)
			printf("%ld, ", n1);
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		i++;
	}
	printf("%ld\n", n1);
	return (0);
}
