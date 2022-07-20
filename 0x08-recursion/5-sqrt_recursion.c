#include "main.h"

/**
 * nat_sqrt- find natural roots
 * @n: numvber
 * @i: counter
 *
 * Return: root
 */

int nat_sqrt(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (nat_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural square root
 * @n:number
 *
 * Return: -1 if no natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (nat_sqrt(n, 2));
	}
}
