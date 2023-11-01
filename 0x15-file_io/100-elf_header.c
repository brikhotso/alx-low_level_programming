#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define ELF_MAGIC_SIZE 16

void display_magic(const unsigned char *magic);
void display_class(const unsigned char e_ident);
void display_data(const unsigned char e_ident);
void display_version(const unsigned char version);
void display_os_abi(const unsigned char osabi);
void display_abi_version(const unsigned char abiversion);
void display_type(const unsigned short e_type);
void display_entry_point(const unsigned long e_entry);
int is_elf_magic(const unsigned char *magic);

/**
 * display_magic - Display the ELF magic number
 * @magic: A pointer to the ELF magic bytes
 */
void display_magic(const unsigned char *magic) {
    int i;

    printf("  Magic:   ");
    for (i = 0; i < ELF_MAGIC_SIZE; i++) {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

/**
 * display_class - Display the ELF class
 * @e_ident: ELF identification data
 */
void display_class(const unsigned char e_ident) {
    printf("  Class:                             ");
    if (e_ident == ELFCLASS32) {
        printf("ELF32\n");
    } else if (e_ident == ELFCLASS64) {
        printf("ELF64\n");
    } else {
        printf("Invalid\n");
        exit(98);
    }
}

/**
 * display_data - Display the ELF data encoding
 * @e_ident: ELF identification data
 */
void display_data(const unsigned char e_ident) {
    printf("  Data:                              ");
    if (e_ident == ELFDATA2LSB) {
        printf("2's complement, little endian\n");
    } else if (e_ident == ELFDATA2MSB) {
        printf("2's complement, big endian\n");
    } else {
        printf("Invalid\n");
        exit(98);
    }
}

/**
 * display_version - Display the ELF version
 * @version: ELF version data
 */
void display_version(const unsigned char version) {
    printf("  Version:                           %d (current)\n", version);
}

/**
 * display_os_abi - Display the ELF OS/ABI
 * @osabi: ELF OS/ABI data
 */
void display_os_abi(const unsigned char osabi) {
    printf("  OS/ABI:                            ");
    if (osabi == ELFOSABI_SYSV) {
        printf("UNIX - System V\n");
    } else if (osabi == ELFOSABI_HPUX) {
        printf("HP-UX\n");
    } else {
        printf("Unrecognized\n");
    }
}

/**
 * display_abi_version - Display the ELF ABI version
 * @abiversion: ELF ABI version data
 */
void display_abi_version(const unsigned char abiversion) {
    printf("  ABI Version:                       %d\n", abiversion);
}

/**
 * display_type - Display the ELF file type
 * @e_type: ELF file type
 */
void display_type(const unsigned short e_type) {
    printf("  Type:                              ");
    if (e_type == ET_NONE) {
        printf("NONE (None)\n");
    } else if (e_type == ET_REL) {
        printf("REL (Relocatable file)\n");
    } else if (e_type == ET_EXEC) {
        printf("EXEC (Executable file)\n");
    } else if (e_type == ET_DYN) {
        printf("DYN (Shared object file)\n");
    } else if (e_type == ET_CORE) {
        printf("CORE (Core file)\n");
    } else {
        printf("Unrecognized\n");
    }
}

/**
 * display_entry_point - Display the ELF entry point address
 * @e_entry: ELF entry point address
 */
void display_entry_point(const unsigned long e_entry) {
    printf("  Entry point address:               0x%lx\n", e_entry);
}

/**
 * is_elf_magic - Check if the magic bytes match the ELF magic number
 * @magic: A pointer to the ELF magic bytes
 * Return: 1 if ELF magic number matches, 0 otherwise
 */
int is_elf_magic(const unsigned char *magic) {
    return (magic[0] == 0x7F && magic[1] == 'E' && magic[2] == 'L' && magic[3] == 'F');
}

/**
 * check_elf - Check if the file is an ELF file
 * @filename: The name of the file to check
 * Return: 1 if the file is an ELF file, 0 otherwise
 */
int check_elf(const char *filename) {
    unsigned char magic[ELF_MAGIC_SIZE];
    int fd;
    ssize_t n;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    n = read(fd, magic, ELF_MAGIC_SIZE);
    if (n != ELF_MAGIC_SIZE) {
        perror("Error reading ELF magic");
        close(fd);
        exit(98);
    }

    close(fd);

    return is_elf_magic(magic);
}

int main(int argc, char *argv[])
{
	Elf64_Ehdr ehdr;
	int fd;
	
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    if (!check_elf(argv[1])) {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    if (read(fd, &ehdr, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
        perror("Error reading ELF header");
        close(fd);
        exit(98);
    }

    close(fd);

    printf("ELF Header:\n");
    display_magic(ehdr.e_ident);
    display_class(ehdr.e_ident[EI_CLASS]);
    display_data(ehdr.e_ident[EI_DATA]);
    display_version(ehdr.e_ident[EI_VERSION]);
    display_os_abi(ehdr.e_ident[EI_OSABI]);
    display_abi_version(ehdr.e_ident[EI_ABIVERSION]);
    display_type(ehdr.e_type);
    display_entry_point(ehdr.e_entry);

    return 0;
}
