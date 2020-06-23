#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: the length of the string
 */
int _strlen(char *s);
void rev_string(char *s)

{
	int i, len, j;
	char p[1000];


	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}

	j = 0;
	len = _strlen(s);
	while (len > 0)
	{
		s[j] = p[len - 1];
		len--;
		j++;
	}
}
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
