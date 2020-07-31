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
	unsigned long int aux1, aux2;
	int len;

	aux1 = n;
	count = 0;
	while (aux1 > 0)
	{
		aux1 = aux1 >> 1;
		count++;
	}
	aux2 = 1 << count;
	while (aux2 > 0)
	{
		(n & aux2) > 0 ? _putchar('1') : _putchar('0');
		aux2 = aux2 >> 1;
	}
}
