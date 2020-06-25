#include "holberton.h"
/**
 * _strncpy - copies the string pointed to by src, to buffer pointed to by dest.
 * @dest: string result of copying
 * @src: string to be copy
 * @n: number of characters to copy
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *out = dest;

	i = 0;
	while (i < n && (*dest = *src) != '\0')
	{
		src++;
		dest++;
	}
	return (out);
}
