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
unsigned int power(unsigned int b, unsigned int e)
{
	unsigned int i;

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
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, 0 if b is NULL or has chars that are nor 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i, j;

	if (b == NULL || *b == '\0')
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] < '0') || (b[i] > '1'))
		return (0);
		i++;
	}
	i--;
	j = 0;
	sum = 0;
	while (i >= 0)
	{
		if (b[j] == '1')
			sum += power(2, i);
		i--;
		j++;
	}
	return (sum);
}
