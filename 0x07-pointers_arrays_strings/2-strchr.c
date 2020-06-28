#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s:  string to be scanned.
 * @c: the character to be searched
 * Return: pointer to the 1st occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
		s++;
	return (s);
}
