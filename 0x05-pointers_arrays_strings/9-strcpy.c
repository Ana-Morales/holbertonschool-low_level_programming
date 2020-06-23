#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src, to buffer pointed to by dest.
 * @dest: string result of copying
 * @src: string to be copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
