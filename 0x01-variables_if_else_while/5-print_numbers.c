#include <stdio.h>
/**
 * main -  Print all single digit numbers
 * Return: 0
 */
int main(void)

{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
