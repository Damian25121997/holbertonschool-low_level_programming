#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: argument count
* @argv: argument list
* Return: result of function
*/
int main(int argc, char *argv[])
{
	int one, eq;
	char *get_op;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	get_op = argv[2];

	if ((*get_op == '/' || *get_op == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	else if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		eq = (*(get_op_func(get_op)))(one, (atoi(argv[3])));
		printf("%d\n", eq);
		return (0);
	}
}
