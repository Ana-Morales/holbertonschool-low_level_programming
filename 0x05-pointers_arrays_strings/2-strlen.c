#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string to get its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, len;

	i = 0;
	while (s[i] != '\0')
	{
		len = i + 1;
		i++;
	}
	return (len);
}
