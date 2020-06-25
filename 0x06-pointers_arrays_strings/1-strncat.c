#include "holberton.h"
/**
 * _strncat -  concatenates two strings.
 *
 * @dest: destination
 * @src: string to add to dest
 * @n: number of char to concatenate
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	{
		char *out;
		int i;

		out = dest;
		while (*dest != '\0')
			dest++;
		i = 0;
		while (i < n && (*dest = *src) != '\0')
		{
			i++;
			dest++;
			src++;
		}
		return (out);
	}
}
