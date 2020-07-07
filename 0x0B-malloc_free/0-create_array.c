#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and init. it with a specific char
 * @size: the size of the array
 * @c: char
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
	free(ar);
}
