#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: nil
 */

void print_number(int n)
{
	unsigned int m, d, len;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	len = 1;

	while (d > 9)
	{
		d /= 10;
		len *= 10;
	}
	for (; len >= 1; len /= 10)
	{
		_putchar(((m / len) % 10) + 48);
	}
}
