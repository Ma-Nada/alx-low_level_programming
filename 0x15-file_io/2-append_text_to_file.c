#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: added content.
 * Return: 1 file exists. -1 file doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int numberofl;
	int w;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (numberofl = 0; text_content[numberofl]; numberofl++)
			;

		w = write(file, text_content, numberofl);

		if (w == -1)
			return (-1);
	}

	close(file);

	return (1);
}
