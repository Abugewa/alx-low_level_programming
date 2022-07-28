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
	unsigned int len1, len2, i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n > len2)
		n = len2;

	len = len1 + n;

	newstr = (char *)malloc(len + 1);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i < len1)
			newstr[i] = s1[i];
		else
			newstr[i] = s2[i - len1]
	}
	newstr[i] = '\0';
	return (newstr);
}
