#include "holberton.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to
 * @s:  pointer to the block of memory to fill
 * @b: the value to be set
 * @n: the number of bytes to be set to the value
 * Return: a pointer to the memory area str
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *out = s;

	i = 0;
	while (i < n && (*s = b) != '\0')
	{
		s++;
		i++;
	}
	return (out);
}
