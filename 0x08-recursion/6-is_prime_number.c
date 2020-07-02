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

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_isprime(n, n - 1));
}
/**
 * _isprime - indentifies is a number is prime
 * @n: number to test
 * @d: divisor to check is n is prime
 * Return: 1 if n is prime, 0 if not
 */

int _isprime(int n, int d)
{
	if (d == 1)
		return (1);
	if (n % d == 0)
		return (0);
	return (_isprime(n, d - 1));
}
