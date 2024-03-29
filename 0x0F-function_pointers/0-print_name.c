#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: function pointer
 *
 * Return: nil
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
