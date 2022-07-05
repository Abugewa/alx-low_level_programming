#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, ij;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			ij = i * j;
			_putchar(44);
			_putchar(32);
			if (ij <= 9)
			{
				_putchar(32);
				_putchar(ij + 48);
			}
			else
			{
				_putchar((ij / 10) + 48);
				_putchar((ij % 10) + 48);
			}
		}
		_putchar(10);
	}
}
