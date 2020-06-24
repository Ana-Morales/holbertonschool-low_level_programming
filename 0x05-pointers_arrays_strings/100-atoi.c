#include "holberton.h"
/**
 * _atoi -  convert a string to an integer
 * @s: string to convert
 * Return: the integer detected
 */
int _atoi(char *s)
{
	int num = 0, sign = 1;
	char *p = s, *n = s;


	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			while (p < s)
			{
				if (*s == '-')
				{
					sign = sign * (-1);
				}
				s--;
				n++;
			}
			if (*s == '-')
				sign = sign * (-1);
			s = n;
			while (*s >= '0' && *s <= '9')
			{
				if (sign == (-1))
				{
					num = ((num * 10) - (*s - 48));
					s++;
				}
				else
				{
					num = (num * 10) + (*s - 48);
					s++;
				}
			}
		break;
		}
		else
			s++;
	}
	return (num);
}
