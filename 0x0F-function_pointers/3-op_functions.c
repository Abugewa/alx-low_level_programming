#include "3-calc.h"

/**
 * op_add - returns sum
 *
 * @a: first number
 * @b: second number
 *
 * Return: output
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference
 *
 * @a: first number
 * @b: second number
 *
 * Return: output
 */

int op_sub(int a, int b)
{
	return (abs(a - b));
}

/**
 * op_mul - returns product
 * @a: first number
 * @b: second number
 *
 * Return: output
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division
 *
 * @a: first number
 * @b: second number
 *
 * Return: output
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of division
 *
 * @a: first number
 * @b: second number
 *
 * Return: output
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
