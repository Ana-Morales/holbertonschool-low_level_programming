#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	int i, l, d;

	i = 1;
	l = 1;
	while (n / i != 0)
	{
		l = i;
		i = i * 10;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	while (l > 0)
	{
		d = n / l;
		_putchar('0' + d);
		n = n % l;
		l = l / 10;
	}
}
