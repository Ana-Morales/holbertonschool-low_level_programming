#include "holberton.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: The number to print its sign
 *
 * Return: 1 if n > 0, 0 if n = 0 or -1 if n < 0.
 */
int print_sign(int n)

{
	int ans;

	if (n > 0)
	{
		_putchar('+');
		ans = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		ans = -1;
	}
	else
	{
		_putchar('0');
		ans = 0;
	}
	return (ans);
}
