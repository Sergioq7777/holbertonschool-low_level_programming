#include "holberton.h"

/**
 * read_textfile-Function that reads file and prints it to the stndout.
 *
 *@filename: char.
 *@letters: char.
 *
 * Return: ssize_t.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t nr_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	buffer = malloc(sizeof(letters));

	if (!buffer)
		return (0);

	if (fd == -1)
		return (0);

	else
	{
		nr_bytes = read(fd, buffer, letters);
		close(fd);

		write(1, buffer, nr_bytes);
	}

	return (nr_bytes);
}
