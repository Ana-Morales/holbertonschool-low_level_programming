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
	if (n / (1000000000) != 0)
	{
		l = 1000000000;
	}
	else
	{
		while (n / i != 0)
		{
			l = i;
			i = i * 10;
		}
	}
	if (n < 0)
	{
		_putchar('-');
		while (l > 0)
		{
			d = n / l;
			_putchar('0' + (d * -1));
			n = n % l;
			l = l / 10;
		}
	}
	else
	{
		while (l > 0)
		{
			d = n / l;
			_putchar('0' + d);
			n = n % l;
			l = l / 10;
		}
	}
}
