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
 * flip_bits - calculates number of bits needed to flip from one num to another
 * @n: initial number
 * @m: final number
 *
 * Return:  number of bits needed to make the flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum, xor;
	unsigned int i = 0, count = 0;
	int j;

	xor = n ^ m;
	for (sum = 0; sum < xor; i++)
	{
		sum += power(2, i);
	}
	i--;
	for (sum = 0, j = i; j >= 0; i--, j--)
	{
		sum += power(2, i);
		if (sum <= xor)
		{
			count++;
		}
		else
		{
			sum -= power(2, i);
		}
	}
	return (count);
}
