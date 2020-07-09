#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0)
		return (NULL);
	p = malloc((nmemb * size) + 1);
	if (p == NULL)
		return (NULL);
	return (p);
}
