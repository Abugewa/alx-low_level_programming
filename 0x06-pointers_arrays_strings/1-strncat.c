#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination
 * @src:source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, len2;

	len = 0;
	len2 = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (len2 < n)
	{

		*(dest + len) = *(src + len2);
		if (*(src + len2) == '\0')
		{
			break;
		}
		len++;
		len2++;
	}
	return (dest);
}
