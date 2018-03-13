#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, read_actual, write_actual;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_actual = read(fd, buffer, letters);
	if (read_actual == -1)
		return (0);

	close(fd);

	write_actual = write(STDOUT_FILENO, buffer, letters);
	if (write_actual == -1)
		return (0);

	free(buffer);

	return (read_actual);
}
