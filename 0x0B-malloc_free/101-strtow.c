#include "main.h"
#include <stdlib.h>

/**
 * char_free - frees array
 * @grid: array of char
 * @height: height
 * Return: no return
 */

void char_free(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

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

	if (str == NULL || *str == '\0')
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
			if (str[c] == ' ')
				a++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - a + 2) * sizeof(char));
				if (words[i] == NULL)
				{
					char_free(words, i);
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
