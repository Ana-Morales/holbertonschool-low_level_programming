#include "holberton.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int f1;
	int f2;
	int m;
	int m2;

	f1 = 0;
	f2 = 0;
	while (f1 <= 9)
	{
		m = f1 * f2;
		if (m <= 9)
		{
			m2 = f1 * (f2 +1);
			_putchar('0' + m % 10);
			if (f2 < 9 && m2 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				f2++;
			}
			else if (f2 < 9 && m2 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				f2++;
			}
			else
			{
				_putchar('\n');
				f2 = 0;
			        f1++;
			}
		}
		else
		{
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			if (f2 < 9)
			{
				_putchar(',');
				_putchar(' ');
				f2++;
			}
			else
			{
				_putchar('\n');
				f2 = 0;
				f1++;
			}
		}
	}
}
