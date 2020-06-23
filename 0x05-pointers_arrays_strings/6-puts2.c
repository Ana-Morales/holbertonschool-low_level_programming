#include "holberton.h"
/**
 * puts2 - prints every other char of a string, starting with the 1rts char
 * @str: string to print
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
