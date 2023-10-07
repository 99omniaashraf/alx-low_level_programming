#include "main.h"
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * main - check of the code
 * @argc: input1
 * @argv: input2
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fd_in, fd_out, bytes_read, bytes_written;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_in = open(argv[1], O_RDONLY);
	if (fd_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_out = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0666);
	if (fd_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	bytes_read = read(fd_in, buf, BUF_SIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_out, buf, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	close(fd_in);
	close(fd_out);
	return (0);
}
