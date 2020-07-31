#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux1;
	int count;

	aux1 = n;
	count = 0;
	while (aux1 > 0)
	{
		aux1 = aux1 >> 1;
		count++;
	}
	if (count > 0)
		count--;
	while (count >= 0)
	{
		((n >> count) & 1) > 0 ? _putchar('1') : _putchar('0');
		count--;
	}
}
