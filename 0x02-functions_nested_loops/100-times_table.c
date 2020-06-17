#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 */
void print_times_table(int n)
{
	int f1, f2, m;
	int m2;

	if (n >= 0 && n <= 15)
	{
		f1 = 0;
		while (f1 <= n)
		{
			f2 = 0;
			while (f2 <= n)
			{
				m = f1 * f2;
				m2 = f1 * (f2 + 1);
				printf("%d", m);
				if (f2 == n)
				{
					printf("\n");
				}
				else if (m > 99 || m2 > 99)
				{
					printf(", ");
				}
				else if (m > 9 || m2 > 9)
				{
					printf(",  ");
				}
				else
				{
					printf(",   ");
					}
				f2++;
			}
			f1++;
		}
	}
}
