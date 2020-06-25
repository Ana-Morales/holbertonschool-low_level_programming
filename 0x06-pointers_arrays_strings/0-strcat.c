#include "holberton.h"
/**
 * _strcat -  concatenates two strings.
 *
 * @dest: destination
 * @src: string to add to dest
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *out;

	out = dest;
	while (*dest != '\0')
		dest++;
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	return (out);
}
