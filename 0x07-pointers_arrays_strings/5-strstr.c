#include "holberton.h"
/**
 * _strstr -  locates a substring
 *
 * @haystack: string to be scanned
 * @needle: string to be searched with-in haystack string
 * Return: pointer to the first occurrence in haystack of needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = haystack;
	int i, j;

	i = 0;
	if (needle[i] == '\0')
		return (s);
	while (*s != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && s[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (s);
			if (s[i + 1] == needle[j + 1])
			{
				j++;
				i++;
			}
			else
				break;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
