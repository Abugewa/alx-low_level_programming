#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if lowercase, 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
