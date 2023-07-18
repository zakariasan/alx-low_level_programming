#include "main.h"

/**
 * print_alphabet_x10 - print x10 alpha
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = -1;
	c = 'a';
	while (++i < 10)
	{
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}
}
