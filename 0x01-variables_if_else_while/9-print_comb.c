#include <stdio.h>
/**
 * main -  Print combinations of single-digit numbers
 * Return: 0
 */
int main(void)

{
	int i;

	i = 48;
	while (i <= 56)
	{
		putchar(i);
		putchar(',');
		putchar(32);
		i++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
