#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p = 0;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (p);
}
