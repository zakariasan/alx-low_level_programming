#include <stdio.h>
/**

 * checksum - Calculate the sum of every character of a string

 *

 * @p: A pointer to the first character of a string

 * Return: The sum of every character in @p

*/

unsigned long int checksum(char *p)

{

	unsigned long int c;



	c = 0;

	while (*p)

	{

		c += *p;

		p++;

	}

	return (c);

}



/**

 * main - Entry point

 *

 * @ac: Arguments counter

 * @av: Arguments array

 * Return: 1 on error, 0 otherwise

*/

int main(int ac, char **av)

{

	unsigned long int c;



	if (ac != 2)

	{

		printf("Usage: %s password\n", av[0]);

		return (1);

	}

	c = checksum(av[1]);

	/* printf("%lu\n", c); */

	/* "Talk is cheap. Show me the code." */

	if (c != 2772)

	{

		printf("Wrong password\n");

		return (1);

	}

	printf("Tada! Congrats\n");

	return (0);

}
