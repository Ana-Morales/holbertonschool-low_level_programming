#include <stdio.h>
/**
 * main - test fizzbuzz function
 */
void fizzbuzz(void);
int main(void)
{
	fizzbuzz();
	return (0);
}
/**
 * fizzbuzz - prints the numbers from 1 to 100
 *
 * Description: Prints Fizz for mult of 3,
 * Buzz for mult of 5, FizzBuzz for mult of both
 */
void fizzbuzz(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
		n++;
	}
	putchar('\n');
}
