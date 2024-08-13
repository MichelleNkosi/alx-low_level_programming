#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>

void print_error(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(98);
}

void read_elf_header(const char *filename)
{
int fd;
Elf64_Ehdr header;
fd = open(filename, O_RDONLY);
if (fd == -1)
print_error("Error: Can't read from file");
if (read(fd, &header, sizeof(header)) != sizeof(header))
print_error("Error: Can't read from file");
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Error: Not an ELF file");
}
printf("ELF Header:\n");
printf("  Magic:   ");
int i;
for (i = 0; i < EI_NIDENT; i++)
{
	/*loop body*/
}
printf("%02x ", header.e_ident[i]);
printf("\n");
printf("  Class:                             ");
switch (header.e_ident[EI_CLASS])
{
case ELFCLASS32: printf("ELF32\n"); break;
case ELFCLASS64: printf("ELF64\n"); break;
default: printf("Invalid class\n"); break;
}
printf("  Data:                              ");
switch (header.e_ident[EI_DATA])
{
case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
default: printf("Invalid data encoding\n"); break;
}
printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
default: printf("<unknown: %d>\n", header.e_ident[EI_OSABI]); break;
}
printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header.e_type)
{
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
default: printf("<unknown: %d>\n", header.e_type); break;
}
printf("  Entry point address:               0x%lx\n", header.e_entry);
if (close(fd) == -1)
print_error("Error: Can't close fd");
}
int main(int argc, char *argv[])
{
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(97);
}
read_elf_header(argv[1]);
return (0);
}
