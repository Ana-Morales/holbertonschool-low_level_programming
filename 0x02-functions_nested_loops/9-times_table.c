#include "holberton.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int f1, f2, m, m2;

	for (f1 = 0; f1 <= 9; f1++)
	{
		for (f2 = 0; f2 <= 9; f2++)
		{
			m = f1 * f2;
			if (m <= 9 && f2 < 9)
			{
				m2 = f1 * (f2 + 1);
				_putchar('0' + m);
				_putchar(',');
				_putchar(' ');
				if (m2 < 10)
				{
					_putchar(' ');
				}
			}
			else if (m > 9 && f2 < 9)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
				_putchar(',');
				_putchar(' ');
			}
			else if (m <= 9 && f2 == 9)
			{
				_putchar('0' + m);
				_putchar ('\n');
			}
			else if (m > 9 && f2 == 9)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
				_putchar('\n');
			}
		}
	}
}
