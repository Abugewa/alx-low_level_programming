#include "main.h"

/**
 * rot13 - encodes in rot13
 * @s: string
 *
 * Return: string
 */

char *rot13(char *)
{
	int len, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = 0;
	while (*(s + len) != '\0')
	{
		for(i = 0; i < 52; i++)
		{
			if (*(s + len) == alpha[i])
			{
				*(s + len) = rot[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
