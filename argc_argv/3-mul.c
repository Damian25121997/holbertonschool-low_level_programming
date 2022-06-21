#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its name
* @argc: stands for argument count
* @argv: stands for argument values
* Return: 0
*/

int main(int argc, char *argv[])
{
	int mult;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
