#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_Elf - print ELF files
 * @hd: ELF header.
 */
void print_Elf(Elf64_Ehdr *hd)
{
	int i;

	i = -1;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (++i < 4)
		printf("%02x ", hd->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", hd->e_ident[4] ==
			1 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", hd->e_ident[5] ==
			1 ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %u (current)\n",
			hd->e_ident[6]);
	printf("  OS/ABI:                            %u\n", hd->e_ident[7]);
	printf("  ABI Version:                       %u\n", hd->e_ident[8]);
	printf("  Type:                              %u\n", hd->e_type);
	printf("  Entry point address:               0x%lx\n", (unsigned long)
			hd->e_entry);
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
	int fd;
	Elf64_Ehdr hd;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf-file(s)\n", av[0]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < -1)
		return (98);
	if (read(fd, &hd, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		return (98);
	if (!(hd.e_ident[0] == 127 && hd.e_ident[1] == 'E' && hd.e_ident[2] ==
				'L' && hd.e_ident[3] == 'F'))
		return (98);
	print_Elf(&hd);
	close(fd);
	return (0);
}
