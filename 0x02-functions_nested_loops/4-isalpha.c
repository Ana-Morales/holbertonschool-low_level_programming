#include "holberton.h"
/**
 * _isalpha - checks for  for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise.
 */
int _isalpha(int c)

{
	int ans;

	if (c >= 65 && c <= 90)
	{
		ans = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		ans = 1;
	}
	else
	{
		ans = 0;
	}
	return (ans);
}
