#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void printError(const char* message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

void displayElfHeader(const char* filename) {
	Elf64_Ehdr header;
	int fd;
	ssize_t bytesRead;

       fd = open(filename, O_RDONLY);
	if (fd == -1) {
		printError("Error opening file");
	}
	bytesRead = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytesRead != sizeof(Elf64_Ehdr)) {
		printError("Error reading ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		printError("Not an ELF file");
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n", header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header.e_type);
	printf("  Entry point address:               0x%lx\n", (unsigned long)header.e_entry);

	close(fd);
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}

	displayElfHeader(argv[1]);

	return 0;
}
