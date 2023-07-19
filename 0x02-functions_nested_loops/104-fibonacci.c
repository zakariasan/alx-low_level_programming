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
	long int n1First;
	long int n1Last;
	long int n2First;
	long int n2Last;
	int i;

	n1 = 1;
	n2 = 2;
	i = 0;
	while (i < 91)
	{
		printf("%ld, ", n1);
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;
		i++;
	}
	n1First = n1 / 1000000000;
	n1Last = n1 % 1000000000;
	n2First = n2 / 1000000000;
	n2Last = n2 % 1000000000;
	while (i < 99)
	{
		printf("%ld", n1First + (n1Last / 1000000000));
		printf("%ld", n1Last % 1000000000);
		n1First = n2First;
		n1Last = n2Last;
		n2First = n1First + n2First;
		n2Last = n1Last + n2Last;
		if (i < 98)
			printf("\n");
		i++;
	}

	return (0);
}
