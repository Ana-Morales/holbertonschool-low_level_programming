#include "holberton.h"
/**
 * _memcpy - copies memory area.
 * @dest:  pointer to the block of memory to fill
 * @src: pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *out = dest;

	i = 0;
	while (i < n && (*dest = *src) != '\0')
	{
		dest++;
		src++;
		i++;
	}
	return (out);
}
