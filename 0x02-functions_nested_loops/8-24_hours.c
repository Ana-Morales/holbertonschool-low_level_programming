#include "holberton.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int h;
	int m;
	int h0;
	int h1;
	int m0;
	int m1;

	h = 0;
	m = 0;
	while (h <= 23)
	{
		if (m <= 59)
		{
			h0 = h / 10;
			h1 = h % 10;
			_putchar('0' + h0);
			_putchar('0' + h1);
			_putchar(':');
			m0 = m / 10;
			m1 = m % 10;
			_putchar('0' + m0);
			_putchar('0' + m1);
			m++;
			_putchar('\n');
		}
		else
		{
			m = 0;
			h++;
		}
	}
}
