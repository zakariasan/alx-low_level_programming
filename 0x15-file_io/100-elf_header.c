#include "main.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 * prt_osiAbi - print os/ABI str.
 * @nbr: ELF header heade->e_ident[7]
 */
void prt_osiAbi(int nbr)
{
	char *bf[] = {"UNIX - System V\n", "UNIX - HP-UX\n", "UNIX - NetBSD\n",
	"UNIX - Linux\n", "UNIX - Solaris\n", "UNIX - IRIX\n",
	"UNIX - FreeBSD\n", "UNIX - TRU64\n", "ARM\n", "Standalone App\n"};

	printf("%s", bf[nbr]);
}

/**
 * prt_tp - print type str.
 * @nbr: ELF header nbr.
 */
void prt_tp(int nbr)
{
	char *bf[] = {"NONE (Unknown type)\n", "REL (Relocatable file)\n",
	"EXEC (Executable file)\n", "DYN (Shared object file)\n",
	"CORE (Core file)\n"};

	printf("%s", bf[nbr]);
}
/**
 * print_Elf - print ELF files
 * @hd: ELF header.
 */
void print_Elf(Elf64_Ehdr *hd)
{
	int i;
	unsigned long int entry;

	i = -1;
	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (++i < 16)
		printf("%02x ", hd->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", hd->e_ident[4] ==
			1 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", hd->e_ident[5] ==
			1 ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %u (current)\n",
			hd->e_ident[6]);
	printf("  OS/ABI:                            ");
	prt_osiAbi(hd->e_ident[7]);
	printf("  ABI Version:                       %u\n", hd->e_ident[8]);
	printf("  Type:                              ");
	prt_tp(hd->e_type);
	entry = hd->e_entry;
	if (hd->e_ident[5] != 1)
	{
		for (i = 0; i < 4; i++)
			entry = (entry << 8) | ((entry >> (i * 8)) & 0xFF);
	}
	printf("  Entry point address:               %#lx\n", (unsigned long)
			entry);
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
