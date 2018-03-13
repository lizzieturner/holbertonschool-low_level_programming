#include "holberton.h"

/**
 * _strlen - finds length of null-terminated string
 * @s: string
 *
 * Return: length of string
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to add to file as contents
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	ssize_t write_actual;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
	if (fd == -1)
		return (-1);

	length = _strlen(text_content);

	write_actual = write(fd, text_content, length);

	close(fd);

	if (write_actual == -1)
		return (-1);

	return (1);
}
