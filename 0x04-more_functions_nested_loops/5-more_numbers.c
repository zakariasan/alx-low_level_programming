#include "main.h"

/**
* print_most_numbers - Print nbrs.
* Description : function that prints the numbers
* (not 2 and 4), from 0 to 9 \n.
*/

void print_numbers(void)
{
	int c;

	c = 0;
	while (c <= 14)
		_putnbr(c++);
	_putchar('\n');
}
