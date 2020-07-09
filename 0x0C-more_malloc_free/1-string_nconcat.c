#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2 to concatenate to s1
 * @n: number of bytes of s2 to be concat to s1
 *
 * Return: Point to newly allocated space in mem with s1 + n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n > len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		p[len1] = s2[i];
		len1++;
		i++;
	}
	return (p);
	free(p);

}
