#include <stdio.h>
#include "holberton.h"
/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *)&i;
	if (*c != '\0')
		return (1);
	else
		return (0);
}
