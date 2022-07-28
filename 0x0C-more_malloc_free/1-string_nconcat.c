#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters of str2
 *
 * Return: pointer to new string(sucess), NULL(failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i, j;

	if (n >= strlen(s2))
		n = strlen(s2);
	if (s2 == NULL)
	{
		s2 = "";
		return (NULL);
	}
	newstr = (char *)malloc(strlen(s1) + n + 1);
	for (i = 0; i < strlen(s1); i++)
	{
		newstr[i] = s1[i];
		if (*s1[i] == '\0')
			break;
	}
	for (j = 0; j < n; j++)
		newstr[j] = s2[j];
	return (newstr);
}
