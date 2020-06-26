#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	char *p = s;

	while (*s != '\0')
	{
		i = 0;
		while (c[i] != '\0')
		{
			if (*s == c[i])
			{
				*s = t[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (p);
}
