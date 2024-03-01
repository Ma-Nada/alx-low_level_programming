#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: content writed in the file
 *
 * Return: 1 if it is a success. if it fails it returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int numberofl;
	int w;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (numberofl = 0; text_content[numberofl]; numberofl++)
		;

	w = write(file, text_content, numberofl);

	if (w == -1)
		return (-1);

	close(file);

	return (1);
}
