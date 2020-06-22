#include "holberton.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, len;

	i = 0;
	while (s[i] != '\0')
	{
		len = i + 1;
		i++;
	}
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
