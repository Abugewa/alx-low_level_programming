#include "main.h"

/**
 * _sqrt_recursion - returns natural square root
 * @n:number
 *
 * Return: -1 if no natural root
 */

int _sqrt_recursion(int n)
{
	int i = 2;

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
		if (i % (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
			i++;
		}
	}
}
