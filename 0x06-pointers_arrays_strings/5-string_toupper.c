#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @s:string
 *
 * Return: pointer to string
 */

char *string_toupper(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		if ((*(s + len) >= 97) && (*(s + len) <= 122))
		{
			*(s + len) = *(s + len) - 32;
		}
	}
	return (s);
}
