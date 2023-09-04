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
	if (!bf || !filename)
		return (res);
	fd = open(filename, O_RDONLY);
	res = read(fd, bf, letters);
	if (fd < 0 || res < 0)
		res = 0;
	bf[letters] = 0;
	if (write(STDOUT_FILENO, bf, letters) < 0)
		res = 0;
	if (close(fd) < 0)
		res = 0;
	free(bf);
	return (res);
}
