#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2 to concatenate to s1
 *
 * Return: Pointer to newly allocated space in mem with s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	conc = malloc(sizeof(char) * ((len1 + 1) + (len2 + 1)));
	if (conc == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		conc[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		conc[len1] = s2[i];
		i++;
		len1++;
	}
	return (conc);
	free(conc);
}
