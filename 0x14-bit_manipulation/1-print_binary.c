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
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int sum;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	i = 0;
	sum = 0;
	while (sum < n)
	{
		sum += power(2, i);
		i++;
	}
	i--;
	sum = 0;
	while (i >= 0)
	{
		sum += power(2, i);
		if (sum <= n)
			_putchar('1');
		else
		{
			_putchar('0');
			sum -= power(2, i);
		}
		i--;
	}
}
