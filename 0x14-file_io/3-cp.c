#include "holberton.h"

/**
 * close_all - closes all file descriptors
 * @fd1: file directory 1
 * @fd2: file directory 2
 *
 * Return: 0 if successful
 */

int close_all(int fd1, int fd2)
{
	int close_check1 = close(fd1);
	int close_check2 = close(fd2);

	if (close_check1 == -1 || close_check2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",
			close_check1 == -1 ? fd1 : fd2);
		exit(100);
	}

	return (0);
}

/**
 * copy_file - copies the contents of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success, -1 on failure
 */

int copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t read_actual, write_actual;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file_from);
		free(buffer);
		exit(98);
	}

	if (fd_to == -1)
	{
		free(buffer);
		return (-1);
	}

	while ((read_actual = read(fd_from, buffer, 1024)) > 0)
	{
		write_actual = write(fd_to, buffer, read_actual);
		if (write_actual == -1)
		{
			close_all(fd_from, fd_to);
			free(buffer);
			return (-1);
		}
	}

	close_all(fd_from, fd_to);
	free(buffer);
	return (1);
}

/**
 * main - entry point function in C
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int copy_status;
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	copy_status = copy_file(file_from, file_to);

	if (copy_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (0);
}
