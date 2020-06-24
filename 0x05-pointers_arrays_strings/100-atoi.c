#include "holberton.h"
/**
 * _atoi -  convert a string to an integer
 * @s: string to convert
 * Return: the integer detected
 */
int _atoi(char *s)
{
	int num, pos;

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
			if (*(s - (pos + 1)) == '-')
				num = num * (-1);
			break;
		}
		else
		{
			s++;
		}
	}
	return (num);
}
