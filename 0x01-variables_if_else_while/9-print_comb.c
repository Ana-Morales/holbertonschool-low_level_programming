#include <stdio.h>
/**
 * main -  Print combinations of single-digit numbers
 * Return: 0
 */
int main(void)

{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		putchar(',');
		putchar(32);
		i++;
	}
	putchar('\n');
	return (0);
}
