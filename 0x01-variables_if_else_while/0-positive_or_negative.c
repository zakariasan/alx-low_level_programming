#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* This is the preferred style for multi-line
* comments in C source code.
* Description: get nature of n nbr positive or negative null 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		(n == 0) ? printf("%d is zero\n", n) : printf("%d is positive\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
