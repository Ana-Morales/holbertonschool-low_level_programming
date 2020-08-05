#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _cp - copies the content of a file to another file
 * @filename_from: file to read and copy its content
 * @filename_to: file where the content will be copied
 *
 * Return: 1 on success
 */
int _cp(const char *filename_from, const char *filename_to)
{
	int fd_from, fd_to, n;
	char buffer[1024];
	char *e_1 = "Error: Can't read from file";
	char *e_2 = "Error: Can't write to";
	char *e_3 = "Error: Can't close fd";

	fd_from = open(filename_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "%s %s\n", e_1, filename_from), exit(98);
	fd_to = open(filename_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "%s %s\n", e_2, filename_to), exit(99);
	while (1)
	{
		n = read(fd_from, buffer, 1024);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", e_1, filename_from);
			exit(98);
		}
		if (n < 1024)
		{
			n = write(fd_to, buffer, n);
			break;
		}
		n = write(fd_to, buffer, n);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "%s %s\n", e_2, filename_to);
			exit(99);
		}
	}
	n = close(fd_from);
	if (n == -1)
		dprintf(STDERR_FILENO, "%s %d\n", e_3, fd_from), exit(100);
	n = close(fd_to);
	if (n == -1)
		dprintf(STDERR_FILENO, "%s %d\n", e_3, fd_to), exit(100);
	return (1);
}
/**
 * main - main fucntion
 * @argc: argument count
 * @argv: argument values
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
