#include <stdio.h>
/**
 * main -  Print the numbers from 00 to 99
 * Return: 0
 */
int main(void)

{
	int i;
	int j;

	i = 48;
	j = 48;
	while (i <= 57)
	{
		putchar(i);
		if (j <= 57)
		{
			putchar(j);
			if (i == 57 && j == 57)
			{
				i++;
			}
			else
			{
				putchar(',');
				putchar(32);
				j++;
			}
		}
		else
		{
			j = 48;
			i++;
		}
	}
	putchar('\n');
	return (0);
}
