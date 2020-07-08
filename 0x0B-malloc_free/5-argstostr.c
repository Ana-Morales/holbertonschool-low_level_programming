#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: counter of argumentes
 * @av: pointer to argument
 *
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len, j;

	total_len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = 0;
		while (*(av[i] + len) != '\0')
		{
			len++;
			total_len = total_len + len;
		}
		total_len = total_len + 1;
		i++;
	}
	str = malloc(1 + total_len * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{

		len = 0;
		while (*(av[i] + len) != '\0')
		{
			str[j] = *(av[i] + len);
			len++;
			j++;
		}
		str[j] = '\n';
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
	free(str);
}
