#include "main.h"

/**
 * puts2 - prints every other character
 * @str: input string
 *
 * Return: nil
 */

void puts2(char *str)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar(10);
			break;
		}
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
}
