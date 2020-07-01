#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
