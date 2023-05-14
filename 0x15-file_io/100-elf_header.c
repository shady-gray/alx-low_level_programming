#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>


void verify_elf(unsigned char *elf_num);
void magic_print(unsigned char *elf_num);
void class_print(unsigned char *elf_num);
void data_print(unsigned char *elf_num);
void version_print(unsigned char *elf_num);
void abi_print(unsigned char *elf_num);
void osabi_print(unsigned char *elf_num);
void type_print(unsigned int type_elf, unsigned char *elf_num);
void entry_print(unsigned long int elf_entry, unsigned char *elf_num);
void close_elf(int elf);

/**
 * verify_elf - Checks if a file is an ELF file.
 * @elf_num: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void verify_elf(unsigned char *elf_num)
{
	int idx;

	idx = 0; 
	while (idx < 4)
	{
		if (elf_num[idx] != 127 &&
			elf_num[idx] != 'E' &&
			elf_num[idx] != 'L' &&
			elf_num[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: FIle is not an ELF\n");
			exit(98);
		}
	idx++
	}
}

/**
 * magic_print - Prints the magic numbers of an ELF header.
 * @elf_num: A pointer to an array containing the ELF magic numbers.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void magic_print(unsigned char *elf_num)
{
	int idx;

	printf("  Magic:   ");

	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", elf_num[idx]);

		if (idx == EI_NIDENT - 1)
		printf("\n");
		else
		printf(" ");
	}
}

/**
 * class_print - Prints the class of an ELF header.
 * @elf_num: A pointer to an array containing the ELF class.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void class_print(unsigned char *elf_num)
{
	printf("  Class:                             ");

	switch (elf_num[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_num[EI_CLASS]);
	}
}

/**
 * data_print - Prints the data of an ELF header.
 * @elf_num: A pointer to an array containing the ELF class.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void data_print(unsigned char *elf_num)
{
	printf("  Data:                              ");

	switch (elf_num[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_num[EI_CLASS]);
	}
}

/**
 * version_print - Prints the version of an ELF header.
 * @elf_num: A pointer to an array containing the ELF version.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void version_print(unsigned char *elf_num)
{
	printf("  Version:                           %d",
	elf_num[EI_VERSION]);

	switch (elf_num[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * osabi_print - Prints the OS/ABI of an ELF header.
 * @elf_num: A pointer to an array containing the ELF version.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void osabi_print(unsigned char *elf_num)
{
	printf("  OS/ABI:                            ");

	switch (elf_num[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_num[EI_OSABI]);
	}
}

/**
 * abi_print - Prints the ABI version of an ELF header.
 * @elf_num: A pointer to an array containing the ELF ABI version.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void abi_print(unsigned char *elf_num)
{
	printf("  ABI Version:                       %d\n",
	elf_num[EI_ABIVERSION]);
}

/**
 * type_print - Prints the type of an ELF header.
 * @type_elf: The ELF type.
 * @elf_num: A pointer to an array containing the ELF class.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void type_print(unsigned int type_elf, unsigned char *elf_num)
{
	if (elf_num[EI_DATA] == ELFDATA2MSB)
	type_elf >>= 8;

	printf("  Type:                              ");

	switch (type_elf)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type_elf);
	}
}

/**
 * entry_print - Prints the entry point of an ELF header.
 * @elf_entry: The address of the ELF entry point.
 * @elf_num: A pointer to an array containing the ELF class.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void entry_print(unsigned long int elf_entry, unsigned char *elf_num)
{
	printf("  Entry point address:               ");

	if (elf_num[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
		((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_num[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: ELF file, file descriptor.
 *
 * Return: void
 * Author: BASIL BASSEY
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success
 * Author: BASIL BASSEY
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int f, r;

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(f);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(f, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
	free(header);
	close_elf(f);
	dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
	exit(98);
	}

	verify_elf(header->elf_num);
	printf("ELF Header:\n");
	magic_print(header->elf_num);
	class_print(header->elf_num);
	data_print(header->elf_num);
	version_print(header->elf_num);
	osabi_print(header->elf_num);
	abi_print(header->elf_num);
	type_print(header->type_elf, header->elf_num);
	entry_print(header->elf_entry, header->elf_num);

	free(header);
	close_elf(f);
	return (0);
}

