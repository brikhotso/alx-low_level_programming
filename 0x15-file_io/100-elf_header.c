#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void display_magic(unsigned char *e_ident);
void display_class(unsigned char *e_ident);
void display_data(unsigned char *e_ident);
void display_version(unsigned char *e_ident);
void display_abi(unsigned char *e_ident);
void display_osabi(unsigned char *e_ident);
void display_type(unsigned int e_type, unsigned char *e_ident);
void display_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
    int i;

    for (i = 0; i < 4; i++)
    {
        if (e_ident[i] != 0x7F && e_ident[i] != 'E' &&
            e_ident[i] != 'L' && e_ident[i] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void display_magic(unsigned char *e_ident)
{
    int i;

    printf("  Magic:   ");

    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", e_ident[i]);

        if (i == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void display_class(unsigned char *e_ident)
{
    printf("  Class:                             ");

    if (e_ident[EI_CLASS] == ELFCLASSNONE)
        printf("none\n");
    else if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else if (e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void display_data(unsigned char *e_ident)
{
    printf("  Data:                              ");

    if (e_ident[EI_DATA] == ELFDATANONE)
        printf("none\n");
    else if (e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void display_version(unsigned char *e_ident)
{
    printf("  Version:                           %d", e_ident[EI_VERSION]);

    if (e_ident[EI_VERSION] == EV_CURRENT)
        printf(" (current)\n");
    else
        printf("\n");
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void display_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");

    if (e_ident[EI_OSABI] == ELFOSABI_NONE)
        printf("UNIX - System V\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
        printf("UNIX - HP-UX\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
        printf("UNIX - NetBSD\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
        printf("UNIX - Linux\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
        printf("UNIX - Solaris\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
        printf("UNIX - IRIX\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
        printf("UNIX - FreeBSD\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
        printf("UNIX - TRU64\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
        printf("ARM\n");
    else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
        printf("Standalone App\n");
    else
        printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void display_abi(unsigned char *e_ident)
{
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void display_type(unsigned int e_type, unsigned char *e_ident)
{
    if (e_ident[EI_DATA] == ELFDATA2MSB)
        e_type >>= 8;

    printf("  Type:                              ");

    if (e_type == ET_NONE)
        printf("NONE (None)\n");
    else if (e_type == ET_REL)
        printf("REL (Relocatable file)\n");
    else if (e_type == ET_EXEC)
        printf("EXEC (Executable file)\n");
    else if (e_type == ET_DYN)
        printf("DYN (Shared object file)\n");
    else if (e_type == ET_CORE)
        printf("CORE (Core file)\n");
    else
        printf("<unknown: %x>\n", e_type);
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void display_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    printf("  Entry point address:               ");

    if (e_ident[EI_DATA] == ELFDATA2MSB)
    {
        e_entry = ((e_entry << 8) & 0xFF00FF00) |
                  ((e_entry >> 8) & 0xFF00FF);
        e_entry = (e_entry << 16) | (e_entry >> 16);
    }

    if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)e_entry);
    else
        printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
    if (close(elf) < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
        exit(98);
    }
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int openfile, readfile;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    openfile = open(argv[1], O_RDONLY);
    if (openfile < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    readfile = read(openfile, &header, sizeof(Elf64_Ehdr));
    if (readfile < 0)
    {
        close_elf(openfile);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        exit(98);
    }

    check_elf(header.e_ident);
    printf("ELF Header:\n");
    display_magic(header.e_ident);
    display_class(header.e_ident);
    display_data(header.e_ident);
    display_version(header.e_ident);
    display_osabi(header.e_ident);
    display_abi(header.e_ident);
    display_type(header.e_type, header.e_ident);
    display_entry(header.e_entry, header.e_ident);

    close_elf(openfile);
    return (0);
}
