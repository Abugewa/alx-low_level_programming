#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 *
 * Return: pointer(success), terminate with status value 98(failure)
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = (char *)malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
