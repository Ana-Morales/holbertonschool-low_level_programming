#include <stdio.h>
/**
 * main - Print alphabet in lowercase, whitout q and e
 * Return: 0
 */
int main(void)

{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
			ch++;
		}
		else
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
