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
		if (i < 57)
		{
			putchar(',');
			putchar(32);
			++i;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
