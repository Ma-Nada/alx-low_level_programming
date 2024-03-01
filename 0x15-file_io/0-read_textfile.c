#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename:the name of the file.
 * @letters: the number of letters printed.
 *
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	r = read(file, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(file);

	free(buf);

	return (w);
}
