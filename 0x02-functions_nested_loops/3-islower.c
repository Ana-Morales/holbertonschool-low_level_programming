#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if is lowercase. 0 otherwise
 */
int _islower(int c)

{
	int ans;

	if (c >= 97 && c <= 122)
	{
		ans = 1;
	}
	else
	{
		ans = 0;
	}
	return (ans);
}
