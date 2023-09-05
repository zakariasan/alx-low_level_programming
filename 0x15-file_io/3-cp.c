#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
* _strlen - that returns the length of a string.
* @s: string in.
*
* Description: function that returns the length of a string.
* Return: the length of String s or 0
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

/**
* _fprint - that returns Err msg.
* @fd: file desc.
* @s: error str.
* @file: file name.
*
* Description: function that returns the length of a string.
*/
void _fprint(int fd, char *s, char *file)
{
	write(fd, s, _strlen(s));
	write(fd, file, _strlen(file));
	write(fd, "\n", 1);
}
/**
 * main - check the code
 * @ac: arg nbr.
 * @av: arg str file.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int from, to, size;
	char bf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(av[1], O_RDONLY);
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	while ((size = read(from, bf, 1024)) > 0)
	{
		if (to < 0 || write(to, bf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (size < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
