#include "holberton.h"
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to reoriented to "to".
 * @to: pointer to the char to be copied
 */
void set_string(char **s, char *to)
{
	*s = to;
}
