#include <stdio.h>
/**
 * is_prime_number - indentifies is a number is prime
 * @n: number to test
 * @d: divisor to check is n is prime
 * Return: 1 if n is prime, 0 if not
 */
int _isprime(int n, int d);
int is_prime_number(int n)
{
	int d;

	d = 2;
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_isprime(n, d));
}
/**
 * _isprime - indentifies is a number is prime
 * @n: number to test
 * @d: divisor to check is n is prime
 * Return: 1 if n is prime, 0 if not
 */

int _isprime(int n, int d)
{
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);
	return (_isprime(n, d + 1));
}
