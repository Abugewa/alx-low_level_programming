#include "variadic_functions.h"

/**
 * print_strings - prints strings then a new line
 * @separator: string pprinted between the strings
 * @n: number of strings
 *
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i;

	va_start(strlist, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(strlist, char *))
			printf("%s", va_arg(strlist, char *));
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strlist);
}
