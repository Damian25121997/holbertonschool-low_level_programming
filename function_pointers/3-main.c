#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int one, two, eq;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func argv[2] == NULL || argv[2] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((get_op argv[2] == '/' || get_op argv[2] == '%') && two == '0')
	{
		printf("Error\n");
		exit(100);
	}
	eq = (*(get_op_func(get_op)))(one, two)

	printf("%d\n", eq);
	return (0);
}
