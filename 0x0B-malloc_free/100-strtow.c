#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: Pointer to to an array of strings (words)
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, len = 0, words = 0, j = 0, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != ' ')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words++;
				break;
			}
			break;
		}
	}
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * words);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		len = 0;
		while (str[j] != ' ' && str[j] != '\0')
		{
			len++;
			j++;
		}
		if (len > 0)
		{
			s[i] = malloc(sizeof(char) * (len + 1));
			if (s[i] == NULL)
				return (NULL);
			i++;
		}
		else
			j++;
	}
	i = 0;
	while (i < words)
	{
		if (str[k] == ' ')
			k++;
		else
		{
			j = 0;
			while (str[k] != ' ')
			{
				s[i][j] = str[k];
				j++;
				k++;
			}
			s[i][j] = '\0';
			i++;
		}
	}
	s[i] = NULL;
	return (s);
}
