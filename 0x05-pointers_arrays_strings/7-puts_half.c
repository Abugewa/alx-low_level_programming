#include "main.h"

/**
 * puts_half - print second half of string
 * @str: string
 *
 * Return:nil
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			break;
		}
		len++;
	}
	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;
	for (i++; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
