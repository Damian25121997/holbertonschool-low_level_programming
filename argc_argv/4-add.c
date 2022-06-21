#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers
* @argc: stands for argument count
* @argv: stands for argument values
* Return: 0
*/

int main(int argc, char *argv[])
{
	int x, z, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		for(z = 0; z < argv[x][z]; z++)

		{
			if (isdigit(argv[x]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[x]);
		}
	}
	printf("%d\n", sum);
return (0);
}
