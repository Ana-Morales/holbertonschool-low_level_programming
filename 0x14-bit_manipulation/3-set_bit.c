#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * power - calculate power
 * @b: base
 * @e: power
 *
 * Return: result of power operation
 */
unsigned long int power(unsigned long int b, int e)
{
	unsigned long int i;

	if (e == 0)
		return (1);
	i = 1;
	while (e > 0)
	{
		i = i * b;
		e--;
	}
	return (i);
}
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number in decimal
 * @index: index to set the value
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n = (*n) | (power(2, index));
	return (1);
}
