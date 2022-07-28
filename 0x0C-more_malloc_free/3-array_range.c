#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max:maximum
 *
 * Return: pointer to created array;
 * NULL - failure or min > max
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int i, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	array = (int *)malloc(range * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
