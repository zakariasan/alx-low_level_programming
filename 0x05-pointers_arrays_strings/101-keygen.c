#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[36];
	int i;
	int sum;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i <= 36; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			putchar((2772 - sum) + '0');
			return (1);
		}
	}

	return (0);
}
