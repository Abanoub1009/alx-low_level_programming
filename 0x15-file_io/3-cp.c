#include <stdio.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, ret_read, ret_write;
	char buf[BUF_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		ret_read = read(fd_from, buf, BUF_SIZE);
		if (ret_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

		ret_write = write(fd_to, buf, ret_read);
		if (ret_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (ret_read > 0);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
