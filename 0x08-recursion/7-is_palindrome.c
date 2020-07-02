#include "holberton.h"
#include <stdio.h>
/**
 * is_palindrome - Indentifies if a string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int _len(char *s);
int _ispal(char *s, char *p);
int is_palindrome(char *s)
{
	int len;

	len =  _len(s);
	if (*s != *(s + len - 1))
		return (0);
	return (_ispal(s, s + len - 1));
}
/**
 * _len - returns the length of a string
 * @s: string
 * Return: lenght of the string
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _len(s));
}
/**
 * _ispal - Indentifies if a string is a palindrome
 * @s: string
 * @p: pointer to the last char of the string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int _ispal(char *s, char *p)
{
	if (s >= p)
		return (1);
	if (*s != *p)
		return (0);
	s++;
	p--;
	return (_ispal(s, p));
}
