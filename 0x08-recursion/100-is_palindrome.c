#include "main.h"
#include "2-strlen_recursion"

/**
 * comp - compares characters
 * @s: string
 * @i: min iterator
 * @j: max iterator
 *
 * Return: 1 or 0
 */

int comp(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (comp(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
