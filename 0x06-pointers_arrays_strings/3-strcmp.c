#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if s1 equals s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	i = 0;
	cmp = 0;

	while (cmp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		cmp = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (cmp);
}
