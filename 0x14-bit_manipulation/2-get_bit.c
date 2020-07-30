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
unsigned long int power(unsigned long int b, unsigned int e)
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
 * get_bit - returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index to get the value
 *
 * Return: the value of the bit at index index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n & (power(2, index));
	if (n > 0)
		return (1);
	return (0);
}
