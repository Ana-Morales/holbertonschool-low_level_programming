#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be test
 * Return: The abs value.
 */
int _abs(int n)

{
	int ans;

	if (n >= 0)
	{
		ans = n;
	}
	else
	{
		ans = n * (-1);
	}
	return (ans);
}
