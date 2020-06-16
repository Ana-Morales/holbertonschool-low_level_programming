#include "holberton.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: The number to print the last digit
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int ld;


	if (n >= 0)
	{
		ld = n % 10;
	}
	else
	{
		ld = (-1) * (n % 10);
	}
	_putchar('0' + ld);
	return (ld);
}
