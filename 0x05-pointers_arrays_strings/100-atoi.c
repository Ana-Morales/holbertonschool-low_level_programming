#include "holberton.h"
/**
 * _atoi -  convert a string to an integer
 * @s: string to convert
 * Return: the integer detected
 */
int _atoi(char *s)
{
	int num, pos, sign;
	char *p;

	p = s;

	while (*s != '\0')
	{
		num = 0;
		if (*s >= '0' && *s <= '9')
		{
			pos = 0;
			while (*s >= '0' && *s <= '9')
			{
				num = (num * 10) + (*s - 48);
				s++;
				pos++;
			}
			sign = 1;
			while (p != s)
			{
				if (*s == '-')
				{
					sign = sign * (-1);
					s--;
				}
				else
					s--;
			}
			if (*s == '-')
				sign = sign * (-1);
			num = num * sign;
			break;
		}
		else
		{
			s++;
		}
	}
	return (num);
}
