#include "main.h"

/**
 * _strcat - append strings
 * @dest: destination
 * @src: source
 *
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int len, len2;

	len = 0;
	len2 = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}
	while (len2 >= 0)
	{
		*(dest + len) = *(src + len2);
		if (*(src + len2 == '\0'))
		{
			break;
		}
		len++;
		len2++;
	}
	return (dest);
}
