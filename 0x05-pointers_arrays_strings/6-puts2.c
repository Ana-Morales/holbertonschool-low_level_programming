#include "holberton.h"
/**
 * puts2 - prints every other char of a string, starting with the 1rts char
 * @str: string to print
 */
void puts2(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
	{
		len = i + 1;
		i++;
	}
	j = 0;
	while (j < len)
	{
		_putchar(*str);
		str += 2;
		j += 2;
	}
	_putchar('\n');
}
