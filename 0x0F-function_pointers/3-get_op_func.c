#include "3-calc.h"

/**
 * get_op_func - check if the operator is valid
 * @s: value input operator
 *
 * Return: 0 if false, something else otherwise.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].op && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
