#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * print_error - Print error message to stderr and exit with status 98.
 * @message: Error message string.
 *
 * This function prints the provided error message to the standard error output
 * and exits the program with a status code of 98.
 */

void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information from ELF header.
 * @header: Pointer to the ELF header structure.
 *
 * This function takes a pointer to an ELF header structure and prints various
 * information contained in the header to the standard output.
 */

void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class:   %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ?
			"ELF32" : "ELF64");
	printf("Data:    %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ?
			"UNIX - System V" : "Other");
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:    %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)"
			: (header->e_type == ET_REL) ? "REL (Relocatable file)" : "Other");
	printf("Entry point address: %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line argument strings.
 *
 * This is the main entry point of the program.
 * It checks for the correct number
 * of command line arguments, opens the specified ELF file, reads its header,
 * and prints the information contained in the ELF header. If any errors occur,
 * it exits with status code 98 and prints an error message.
 *
 * Return: 0 on successful execution, 98 on error.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	ssize_t bytesRead;
	const char *filename;
	int fd;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error(strerror(errno));

	bytesRead = read(fd, &header, sizeof(header));

	if (bytesRead != sizeof(header) ||
			memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Not a valid ELF file");

	print_elf_header_info(&header);
	close(fd);

	return (0);
}
