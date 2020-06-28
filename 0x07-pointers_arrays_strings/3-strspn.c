#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the list of chars to match in s
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i, j;

	num = 0;
	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				num++;
				j = 0;
				while (accept[j] != '\0')
				{
					if (*(s + 1) == accept[j])
					{
						break;
					}
					else if (accept[j + 1] == '\0')
						return (num);
					j++;
				}
			}
			i++;
		}
		s++;
	}
	return (num);
}
