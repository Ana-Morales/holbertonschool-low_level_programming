#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
	{
		len = i + 1;
		i++;
	}
	j = len / 2;
	while  (j < len)
	{
		if (len % 2 == 0)
		{
			_putchar(str[j]);
		}
		else
		{
			_putchar(str[j+1]);
		}
		j++;
	}
	_putchar('\n');
}
