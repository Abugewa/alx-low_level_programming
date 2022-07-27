#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2:string 2
 *
 * Return: pointer to address of s1 conatenated with s2(sucess),
 * NULL(failure)
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, k, end;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; i != '\0'; i++)
		;
	for (j = 0; j != '\0'; j++)
		;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		concat[k] = s1[k];
	end = j;
	for (j = 0; j <= end; j++)
		concat[k] = s2[j];
	return (concat);
}
