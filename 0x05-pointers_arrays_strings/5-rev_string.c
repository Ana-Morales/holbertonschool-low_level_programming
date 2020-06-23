#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)

{
	int i, len;
	char p[509];


	i = 0;
	while( s[i] != '\0')
	{

		len = i + 1;
		p[i] = s[i];
		i++;
	}
	while (len > 0)
	{
		*s = p[len -1];
		s++;
		len--;
	}
}
