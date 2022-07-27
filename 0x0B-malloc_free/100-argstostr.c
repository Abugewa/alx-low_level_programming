#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: NULL(failure), pointer(success)
 */

char *argstostr(int ac, char **av)
{
	int i, j, count, end;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (count = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	newstr = malloc((count + 1) * sizeof(char));
	if (newstr == NULL)
	{
		free(newstr);
		return (NULL);
	}
	for (i = j = end = 0; end < count; j++, end++)
	{
		if (av[i][j] == '\0')
		{
			newstr[end] = '\n';
			i++;
			end++;
			j = 0;
		}
		if (end < count - 1)
			newstr[end] = av[i][j];
	}
	newstr[end] = '\0';
	return (newstr);
}
