#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int l, s, h;

	if (size > 0)
	{
		l = 1;
		while (l <= size)
		{
			s = 1;
			while (s <= size - l)
			{
				_putchar(' ');
				s++;
			}
			h = 1;
			while (h <= l)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
			l++;
		}
	}
	else
		_putchar('\n');
}
