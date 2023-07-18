#include "main.h"

/**
 * main - print alpha
 * Description:  print alphabet.
 *
 * Return: no return.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
}
