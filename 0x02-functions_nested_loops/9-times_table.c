#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int row;
	int col;
	int tmp;

	row = -1;
	while (++row <= 9)
	{
		col = -1;
		tmp = 0;
		while (++col <= 9)
		{
			if (tmp >= 10)
			{
				_putchar((tmp / 10) + '0');
				_putchar((tmp % 10) + '0');
			}
			else
				_putchar(tmp + '0');
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar('\n');
			tmp += row;
		}
	}
}
