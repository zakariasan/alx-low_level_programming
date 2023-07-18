#include "main.h"

/**
 * main - Entry
 * Description:  writes the _puchar.
 *
 * Return: main return 1 (Success).
 */
int main(void)
{
	char str[] = "_putchar\n";
	while (*str)
		_putchar(str++);
	return (0);
}
