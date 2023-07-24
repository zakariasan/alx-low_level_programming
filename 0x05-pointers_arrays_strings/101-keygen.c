#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **argv)
{
	unsigned long int c;

	c = 0;
	if (ac != 2)
	{
		printf("Usage: %s password\n", argv[0]);
		return (1);
	}
	while (*argv[1])
	{
		c += *argv[1];
		argv[1]++;
	}
	if (c != 2772)
	{
		printf("Wrong password\n");
		return (1);
	}
	printf("Tada! Congrats\n");
	return (0);
					
}

