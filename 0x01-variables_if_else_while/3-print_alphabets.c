#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)

{
	char ch_l;
	char CH_U;

	ch_l = 'a';
	CH_U = 'A';
	while (ch_l <= 'z')
	{
		putchar(ch_l);
		ch_l++;
	}
	while (CH_U <= 'Z')
	{
		putchar(CH_U);
		CH_U++;
	}
	putchar('\n');
	return (0);
}
