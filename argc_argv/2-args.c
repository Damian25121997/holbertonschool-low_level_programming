#include <stdio.h>

/**
* main - prints its name
* @argc: stands for argument count
* @argv: stands for argument values
* Return: 0
*/
int main (int argc, char *argv[])
{
	int x;
	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
return (0);
}
