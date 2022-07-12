#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: string pointer address
 *
 * Return:length of string
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
