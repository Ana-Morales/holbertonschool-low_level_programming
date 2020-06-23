#include "holberton.h"
/**
 * puts2 - prints every other char of a string, starting with the 1rts char
 * @str: string to print
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
