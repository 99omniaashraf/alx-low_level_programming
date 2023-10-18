#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * _close - close a file
 * @fd: input
 * Return: 0 success, -1 failure
 */
int _close(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
	return (-1);
}

/**
 * _read - read from a file
 * @filename: input1
 * @fd: input2
 * @buf: input3
 * @count: input4
 * Return: the number of bytes read, or -1 failure
 */
ssize_t _read(const char *filename, int fd, char *buf, size_t count)
{
	ssize_t bytes_read = read(fd, buf, count);

	if (bytes_read > -1)
		return (bytes_read);
	dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
	return (-1);
}

/**
 * _write - write to a file
 * @filename: input1
 * @fd: input2
 * @buf: input3
 * @count: input4
 * Return: the number of bytes written, or -1 failure
 */
ssize_t _write(const char *filename, int fd, char *buf, size_t count)
{
	ssize_t bytes_written = write(fd, buf, count);

	if (bytes_written > -1)
		return (bytes_written);
	dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
	return (-1);
}

/**
 * main - copy a file
 * @argc: input1
 * @argv: input2
 * Return: Always 1
 */
int main(int argc, const char *argv[])
{
	int fd_in, fd_out;
	ssize_t bytes_read;
	char buffer[BUFSIZE];

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
	fd_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(fd_in);
		exit(99);
	}
	while ((bytes_read = _read(argv[1], fd_in, buffer, BUFSIZE)))
	{
		if (bytes_read < 0)
		{
			_close(fd_in);
			_close(fd_out);
			exit(98);
		}
		if (_write(argv[2], fd_out, buffer, bytes_read) < 0)
		{
			_close(fd_in);
			_close(fd_out);
			exit(99);
		}
	}
	if ((_close(fd_in) | _close(fd_out)) < 0)
		exit(100);
	return (0);
}
