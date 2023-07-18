#include <unistd.h>

/**
 * main - Print sum of 1024
 *
 * Return: On success 0.
 */
int main(void)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < 1024 && sum < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
		i++;
	}
	_putchar(sum / 100 + '0');
	_putchar((sum % 100) / 10 + '0');
	_putchar(sum % 10 + '0');
	_putchar('\n');
	return (0);
}
