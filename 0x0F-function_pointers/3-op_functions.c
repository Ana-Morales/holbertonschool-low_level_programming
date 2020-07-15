#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sums two number
 * @a: number
 * @b: number
 *
 * Return: result of sum of a and b
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - subtract two numbers
 * @a: number
 * @b: number
 *
 * Return: result of subtraction of a - b
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul - multiplies two numbers
 * @a: number
 * @b: number
 *
 * Return: result of mul of a * b
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - divides two numbers
 * @a: number
 * @b: number
 *
 * Return: result of div a / b
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}
/**
 * op_mod - calculates the remainder of the division of two numbers
 * @a: number
 * @b: number
 *
 * Return: remainder of the division of a / b
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
