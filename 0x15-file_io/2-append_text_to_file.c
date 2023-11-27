#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fio;
	int content;
	int wr;

	if (!filename)
		return (-1);

	fio = open(filename, O_WRONLY | O_APPEND);

	if (fio == -1)
		return (-1);

	if (text_content)
	{
		for (content = 0; text_content[content]; content++)
			;

		wr = write(fio, text_content, content);

		if (wr == -1)
			return (-1);
	}

	close(fio);

	return (1);
}
