#include "main.h"
#include <stdlib.h>
#include "4-free_grid.c"

/**
 * strtow - split string
 * @str: string
 *
 * Return:null(failure), pointer (success)
 */

char **strtow(char *str)
{
	char **words;
	unsigned int i, j, height, c, a;

	if (str == NULL || str == "")
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	words = malloc((height + 1) * sizeof(char *));
	if (words == NULL || height == 0)
	{
		free(words);
		return (NULL);
	}
	for (i = a = 0; i < height; i++)
	{
		for (c = a; str[c] != '\0'; c++)
		{
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - a + 2) * sizeof(char));
				if (words[i] == NULL)
				{
					free_grid(words, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a <= c; a++, j++)
			 words[i][j] = str[a];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
