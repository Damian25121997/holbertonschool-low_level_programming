#include <stdio.h>

/**
* main - prints its name
* @argc: stands for argument count
* @argv: stands for argument values
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%s\n", argc);

	return (0);

}
