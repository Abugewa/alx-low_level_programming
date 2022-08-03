#include "calc.h"

/**
 * get_op_func - selects fuction from operation
 * @s: operator
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
		if (s[0] == ops[i][0])
			return (ops[i][1].f);
	i++;
}
