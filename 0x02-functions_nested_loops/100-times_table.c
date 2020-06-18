#include "holberton.h"
/**
 * print_times_table - prints the n times table
 */
void print_times_table(int n)
{
	int f1, f2, m, m2;

	if (n >= 0 && n <= 15)
	{
		for (f1 = 0; f1 <= n; f1++)
		{
			for (f2 = 0; f2 <= n; f2++)
			{
				m = f1 * f2;
				if (f2 < n)
				{
					m2 = f1 * (f2 + 1);
					if (m <= 9)
					{
						_putchar('0' + m);
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						if (m2 < 10)
							_putchar(' ');
					}
					else if (m > 9 && m <= 99)
					{
						_putchar('0' + m / 10);
						_putchar('0' + m % 10);
						_putchar(',');
						_putchar(' ');
						if (m2 < 100)
							_putchar(' ');
					}
					else if (m > 99)
					{
						_putchar('0' + m / 100);
						_putchar('0' + (m - 100) / 10);
						_putchar('0' + (m - 100) % 10);
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					if (m <= 9)
					{
						_putchar('0' + m);
						_putchar ('\n');
					}
					else if (m > 9 && m <= 99)
					{
						_putchar('0' + m / 10);
						_putchar('0' + m % 10);
						_putchar('\n');
					}
					else if (m > 99)
					{
						_putchar('0' + m / 100);
						_putchar('0' + (m - 100) / 10);
						_putchar('0' + (m - 100) % 10);
						_putchar('\n');
					}
				}
			}
		}
	}
}
