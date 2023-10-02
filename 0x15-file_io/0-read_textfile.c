#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: input1
 * @letters: input2
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t let, fil;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	let = read(file_d, buffer, letters);
	close(file_d);
	if (let == -1)
	{
		free(buffer);
		return (0);
	}
	fil = write(STDOUT_FILENO, buffer, let);
	free(buffer);
	if (let != fil)
		return (0);
	return (fil);
}
