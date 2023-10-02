#include "main.h"

/**
 * create_file - creates a file
 * @filename: input1
 * @text_content: input2
 * Return: 1 on success, -1 on failure(file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int i, a;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;
	a = write(file_d, text_content, i);

	if (a == -1)
		return (-1);

	close(file_d);
	return (1);
}
