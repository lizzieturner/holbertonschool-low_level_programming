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
 * append_text_to_file - appends text to end of file
 * @filename: file
 * @text_content: text to be appended to file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, close_check;
	size_t length;
	ssize_t write_actual;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	length = _strlen(text_content);

	write_actual = write(fd, text_content, length);

	if (write_actual == -1)
		return (-1);

	close(fd);

	if (close_check == -1)
		return (-1);

	return (1);
}
