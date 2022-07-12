#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: nil
 */

void rev_string(char *s)
{
	int len, i, j;
	char *str, rev;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	str = s;
	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = rev;
		}
	}
}
