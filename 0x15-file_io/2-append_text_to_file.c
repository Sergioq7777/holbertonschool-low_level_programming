#include "holberton.h"

/**
 * append_text_to_file - Function that ccreates a file.
 *
 *@filename: char.
 *@text_content: char.
 *
 * Return: int.
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd = open(filename, O_RDWR | O_APPEND);
	int cr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (cr = 0; text_content[cr]; cr++)
		;

	if (fd == -1)
		return (-1);
	cr = write(fd, text_content, cr);

	close(fd);

	return (1);
}
