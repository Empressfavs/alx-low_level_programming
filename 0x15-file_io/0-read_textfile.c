#include "main.h"

/**
 * read_textfile - reads a text file and prints to the standard output
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fio;
	ssize_t rd, wr;
	char *cha;

	if (!filename)
		return (0);

	fio = open(filename, O_RDONLY);

	if (fio == -1)
		return (0);

	cha = malloc(sizeof(char) * (letters));
	if (!cha)
		return (0);

	rd = read(fio, cha, letters);
	wr = write(STDOUT_FILENO, cha, rd);

	close(fio);

	free(cha);

	return (wr);
}
