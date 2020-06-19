#include "holberton.h"
/**
 * print_times_table - prints the n times table
 * @n: n table to print
 *
 * times_table_line - prints (0 to f) x n line
 * @f: First factor
 * @n: second factor
 */
void times_table_line(int f, int n);
void print_times_table(int n)
{
	int f1;

	if (n >= 0 && n <= 15)
	{
		for (f1 = 0; f1 <= n; f1++)
		{
			times_table_line(f1, n);
		}
	}
}

/**
 * times_table_line - prints (0 to f) x n line
 * @f: First factor
 * @n: second factor
 *
 */
void times_table_line(int f, int n)
{
	int f2, m, m2;

	for (f2 = 0; f2 <= n; f2++)
	{
		m = f * f2;
		if (f2 < n)
		{
			m2 = f * (f2 + 1);
			if (m > 99)
			{
				_putchar('0' + m / 100);
				_putchar('0' + (m - 100) / 10);
				_putchar('0' + (m - 100) % 10);
			}
			else if (m > 9)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
				_putchar('0' + m);
			_putchar(',');
			_putchar(' ');
			if (m2 <= 99 && m <= 99)
			{
				_putchar(' ');
				if (m2 < 10 && m <= 9)
					_putchar(' ');
			}
		}
		else
		{
			if (m > 99)
			{
				_putchar('0' + m / 100);
				_putchar('0' + (m - 100) / 10);
				_putchar('0' + (m - 100) % 10);
			}
			else if (m > 9)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
				_putchar('0' + m);
			_putchar ('\n');
		}
	}
}
