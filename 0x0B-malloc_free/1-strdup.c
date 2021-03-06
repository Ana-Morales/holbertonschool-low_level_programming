#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		s[i] = str[i];
		i++;
		len--;
	}
	return (s);
	free(s);
}
