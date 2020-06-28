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
	int i;

	i = 0;
	while (*s != '\0')
	{
		while (needle[i] != '\0' && *s == needle[i] && *(s + 1) == needle[i + 1])
		{
			i++;
			s++;
		}
		if (needle[i + 1] == '\0')
		{
			return (haystack);
		}
		else
		{
			i = 0;
			s = haystack;
		}
		s++;
		haystack++;
	}
	return (s);
}
