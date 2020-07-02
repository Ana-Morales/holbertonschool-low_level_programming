#include <stdio.h>
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * @r: testing value of square root
 * Return: -1 If n doesn't have a natural square root, r otherwise
 */
int _sqrt(int n, int r);
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);
	return (_sqrt(n, r + 1));
}
/**
 * _sqrt -natural square root of a number
 * @n: number
 * @r: testing value of square root
 * Return: -1 If n doesn't have a natural square root, r otherwise
 */

int _sqrt(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_sqrt(n, r + 1));
}
