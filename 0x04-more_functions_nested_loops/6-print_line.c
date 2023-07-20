#include "main.h"

/**
* print_line - Print a simple line.
* @n: length of line.
* Description : Draw single line.
*/

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
		_putchar('_');
	_putchar('\n');
}
