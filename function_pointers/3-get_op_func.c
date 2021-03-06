#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - seach a function
* @s: is a pointer
* Return: Always
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

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
