#include <stdio.h>
/**
 * main -  Print all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)

{
	int i_1;
	int i_2;

	i_1 = 48;
	i_2 = 97;
	while (i_1 <= 57)
	{
		putchar(i_1);
		i_1++;
	}
	while (i_2 <= 102)
	{
		putchar(i_2);
		i_2++;
	}
	putchar('\n');
	return (0);
}
