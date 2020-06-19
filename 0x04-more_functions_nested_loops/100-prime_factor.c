#include <stdio.h>
/**
 * main - test fizzbuzz function
 * @n: number to test
 * Return: 0
 */
int is_prime(long int n);
void prime_factor(long int n);
int main(void)
{
	long int i;

	i = 612852475143;
	prime_factor(i);
	return (0);
}

/**
 * is_prime - indentifies is a number is prime
 * @n: number to test
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(long int n)
{
	long int d, p;

	if (n == 1 || n == 2)
	{
		return (1);
	}
	else
	{
		d = 2;
		while (n % d != 0 && d <= n)
		{
			d++;
			p = d;
		}
		if (p == n)
			return (1);
		else
			return (0);
	}
}
/**
 * prime_factor - prints the largest prime factor of the number
 * @n: number to find its largest prime factor
 */
void prime_factor(long int n)
{
	int p;
	long int largest, d, n1;

	p = is_prime(n);
	n1 = n;

	if (p == 1)
	{
		largest = p;
	}
	else
	{
		d = 2;
		while (d <= n1)
		{
			while (n1 % d == 0)
			{
				largest = d;
				n1 = n1 / d;
			}
			d++;
		}
	}
	printf("%ld\n", largest);
}
