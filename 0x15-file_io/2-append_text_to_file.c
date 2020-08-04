#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string to get its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  name of the file
 * @text_content: NULL terminated string to add to end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd != -1)
	{
		if (text_content == NULL)
			return (1);
		n = write(fd, text_content, _strlen(text_content));
		if (n == -1)
			return (-1);
		close(fd);
		return (1);
	}
	return (-1);
}
