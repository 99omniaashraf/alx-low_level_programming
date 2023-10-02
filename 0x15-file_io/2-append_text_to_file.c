#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: input1
 * @text_content: input2
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, i, a;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		a = write(file_d, text_content, i);

		if (a == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
