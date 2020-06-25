#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 *Return: string in uppercase
 */
char *string_toupper(char *s)
{
	char *out = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (out);
}
