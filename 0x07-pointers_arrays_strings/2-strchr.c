#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s:  string to be scanned.
 * @c: the character to be searched
 * Return: pointer to the 1st occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	char *p = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (p);
}
