B#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 *
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	char c[] = "a, A, e, E, o, O, t, T, l, L";
	char t[] = "4, 4, 3, 3, 0, 0, 7, 7, 1, 1";
	int i;
	char *p = s;

	while (*s != '\0')
	{
		i = 0;
		while (c[i] != '\0')
		{
			if (*s == c[i])
				*s = t[i];
			i++;
		}
		s++;
	}
	return (p);
}
