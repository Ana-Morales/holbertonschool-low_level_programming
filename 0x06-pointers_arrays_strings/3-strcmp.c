#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 == s2, pos if s1 < s2, neg if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1, len_s2;
	char *s1_c = s1, *s2_c = s2;

	len_s1 = 1;
	len_s2 = 1;

	while (*s1 != '\0')
	{
		++s1;
		len_s1++;
	}
	while (*s2 != '\0')
	{
		++s2;
		len_s2++;
	}
	s1 = s1_c;
	s2 = s2_c;
	if (len_s1 > len_s2)
	{
		if ((*s1 - *s2) <0)
			return (-1 * (*s1 - *s2));
		else
			return (*s1 - *s2);
	}
	else if (len_s1 < len_s2)
	{
		if ((*s1 - *s2) < 0)
			return (*s1 - *s2);
		else
			return (-1 * (*s1 - *s2));
	}
	else
		return (0);
}
