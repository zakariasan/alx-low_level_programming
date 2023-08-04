#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - prints buffer in hexa
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Sucess.
 */

int main(int ac, char **av)
{
	while(*av[ac - 1])
		_putchar(*av[0]++);
	_putchar('\n');
	return (0);
}

