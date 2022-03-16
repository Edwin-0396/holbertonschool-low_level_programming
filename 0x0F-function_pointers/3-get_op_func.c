#include "3-calc.h"

/**
 * get_op_func - check if the operator is valid
 * @s: value input operator
 *
 * Return: 0 if false, something else otherwise.
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    
	i = 0;
	while (i < 4)
	{
		if (ops[i].op[0] == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
