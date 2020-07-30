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
 * get_bit - returns the value of a bit at a given index
 * @n: number in decimal
 * @index: index to get the value
 *
 * Return: the value of the bit at index index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sum = 0;
	unsigned int i = 0;
	int j;

	if (n == 0)
	{
		return (0);
	}
	if (index > 63)
		return (-1);
	while (sum < n)
	{
		sum += power(2, i);
		i++;
	}
	i--;
	if (index > i)
		return (0);
	j = i;
	sum = 0;
	while (j >= 0)
	{
		sum += power(2, i);
		if (sum <= n)
		{
			if (i == index)
				return (1);
			continue;
		}
		else
		{
			if (i == index)
				return (0);
			sum -= power(2, i);
		}
		i--;
		j--;
	}
	return (-1);
}
