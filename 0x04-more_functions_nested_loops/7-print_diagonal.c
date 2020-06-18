#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			s = 1;
			while (i > 1 && s < i)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
