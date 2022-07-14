#include "main.h"

/**
 * leet - encodes to 1337
 * @s: string
 *
 * Return: pointer to string
 *
 */

char *leet(char *s)
{
	int len, i;
	int lower[] = {97, 101, 108, 111, 116};
	int upper[] = {65, 69, 76, 79, 84};
	int number[] = {52, 51, 49, 48, 55};


	len = 0;
	while (*(s + len) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + len) == lower[i] || *(s + len) == upper[i])
			{
				*(s + len) = number[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
