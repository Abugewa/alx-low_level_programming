#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i, j, k, l;

i = 48;
while (i <= 50)
	{
	j = 48;
	while (j <= 57)
	{
	k = 48;
	while (k <= 53)
	{
	l = 48;
	while (l <= 57)
	{
		if (i <= 50 && j < 52)
		{
			_putchar(i);
			_putchar(j);
			_putchar(58);
			_putchar(k);
			_putchar(l);
			_putchar(10);
		}
		l++;
	}
	k++;
	}
	j++;
	}
	i++;
	}
}
