#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a != b && b != c && a != c)
	{
		if (a > b && a > c)
			largest = a;
		else if (b > a && b > c)
			largest = b;
		else if (c > a && c > b)
			largest = c;
	}
	else if (a == b && a != c)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else if (a == c && a != b)
	{
		if (a > b)
			largest = a;
		else
			largest = b;
	}
	else if (b == c && a != b)
	{
		if (b > a)
			largest = b;
		else
			largest = a;
	}
	else
		largest = a;
	return (largest);
}
