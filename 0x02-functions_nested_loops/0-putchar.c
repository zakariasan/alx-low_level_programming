#include <unistd.h>

/**
 * main - Entry
 * Description:  writes the _puchar.
 *
 * Return: main return 1 (Success).
 */
int main(void)
{
	write(1,"_putchar\n",9);
	return (0);
}
