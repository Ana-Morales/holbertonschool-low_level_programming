#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_i - prints an int
 * @arg: argument to print
 *
 */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * print_c - prints a char
 * @arg: argumetn to print
 *
 */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_f - prints a float
 * @arg: argument to print
 *
 */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_s - prints a string
 * @arg: argumetn to print
 *
 */
void print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	printf("%s", (s == NULL) ? "(nil)" : s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	void (*f_prnt)(va_list);
	int i, j;
	func a[] = {
		{'i', print_i},
		{'c', print_c},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL},
	};
	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == a[j].id)
			{
				f_prnt = a[j].fp;
				f_prnt(args);
				if (format[i + 1] != '\0')
					printf(", ");

			}
			j++;
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
