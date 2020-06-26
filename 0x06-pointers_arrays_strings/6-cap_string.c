#include "holberton.h"
/**
 * cap_string -  capitalizes all words of a string
 *
 * @s: string
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	char *out = s;
	char e[] = " \t\n,;.!?\"(){}";
	int i;


	if (*s >= 'a' && *s <= 'z')
	{
		*s = *s - 32;
		s++;
	}
	while (*s != '\0')
	{
		i = 0;
		while (e[i] != '\0')
		{
			if (*s == e[i]  && *(s + 1) >= 'a' && *(s + 1) <= 'z')
				*(s + 1) = *(s + 1) - 32;
		       i++;
		}
		s++;
	}
	return (out);
}
