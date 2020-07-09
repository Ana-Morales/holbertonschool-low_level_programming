#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers from min to max
 * @min: min value of the array
 * @max: max value of the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int len, i;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
