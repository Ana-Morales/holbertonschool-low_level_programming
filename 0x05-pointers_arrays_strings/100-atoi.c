#include "holberton.h"
/**
 * _atoi -  convert a string to an integer
 * @s: string to convert
 * Return: the integer detected
 */
int _atoi(char *s)
{
	int num, sign;
	char *p, *n;

	p = s;
	n = s;
	sign = 1;

	while (*s != '\0')
	{
		num = 0;
		if (*s >= '0' && *s <= '9')
		{
			while (p != s)
			{
				if (*s == '-')
				{
					sign = sign * (-1);
					s--;
					n++;
				}
				else
				{
					s--;
					n++;
				}
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
		{
			s++;
		}
	}
	return (num);
}
