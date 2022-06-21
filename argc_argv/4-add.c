#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers
* @argc: stands for argument count
* @argv: stands for argument values
* Return: 0
*/

int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		if (!atoi(argv[x]))
		{
			printf("%d\n""Error");
			return (1);
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
return (0);
}
