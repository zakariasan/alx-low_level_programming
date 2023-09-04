#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - readme in txt file.
 * @filename: filename.
 * @letters: size.
 *
 * Description: function that reads a text file and prints it to theSTDOUT.
 * Return: 0 or nbr of letters.
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *bf;
	int res;

	res = 0;
	bf = malloc(sizeof(char) * letters + 1);
	fd = open(filename, O_RDONLY);
	if (fd > 0)
	{
		res = read(fd, bf, letters);
		bf[letters] = 0;
		write(STDOUT_FILENO, bf, letters);
		free(bf);
	}
	return (res);
}