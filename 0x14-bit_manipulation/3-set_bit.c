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
	unsigned long int sum;
	unsigned int i = 0;
	int j;

	if (index > 63)
		return (-1);
	if (*n == 0)
	{
		*n = *n + power(2, index);
		return (1);
	}
	for (sum = 0; sum < *n; i++)
	{
		sum += power(2, i);
	}
	i--;
	if (index > i)
	{
		*n = *n + power(2, index);
		return (1);
	}
	for (sum = 0, j = i; j >= 0; i--, j--)
	{
		sum += power(2, i);
		if (sum <= *n)
		{
			if (i == index)
				return (1);
		}
		else
		{
			if (i == index)
			{
				*n = *n + power(2, i);
				return (1);
			}
			sum -= power(2, i);
		}
	}
	return (-1);
}
