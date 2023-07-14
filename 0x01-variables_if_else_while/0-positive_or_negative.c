#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		(n == 0) ? printf("%u is zero\n", n) : printf("%u is positive", n);
	}else
		printf("%u is negative\n");
	return (0);
}
