#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char ch;
	char i;

	ch = 'a';
	i = '0';
	while (i <= '9')
	{
		if (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		else
		{
			_putchar('\n');
			ch = 'a';
			i++;
		}
	}
}
