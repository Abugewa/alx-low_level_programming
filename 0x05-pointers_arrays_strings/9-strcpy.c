#include "main.h"
#include<stdio.h>

/**
 * *_strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		*(dest + len) = *(src + len);
		if (*(src + len) == '\0')
		{
			break;
		}
		len++;
	}
	return (dest);
}
