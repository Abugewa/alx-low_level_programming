#include "main.h"

/**
 * prime - checks if a number is prime
 * @n: number
 * @i: counter
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - finds prime numbers
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
