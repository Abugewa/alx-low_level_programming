#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 
 * from 0 to 14
 *
 * Return: no return value
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar(10);
	}
}
