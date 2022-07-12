#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string
 *
 * Return: nil
 */

void _puts(char *str)
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
		_putchar(str[len]);
		len++;
	}
}
