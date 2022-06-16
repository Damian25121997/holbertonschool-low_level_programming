#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int x, y, z;
	char a[] = ",;.!?(){}\n\t\" ";

	for (x = 0, z = 0; str[x] != '\0'; x++)
	{
		if (str[0] > 96 && str[0] < 123)
			z = 1;
		for (y = 0; a[y] != '\0'; y++)
		{
			if (a[y] == str[x])
				z = 1;
		}
		if (z)
		{
			if (str[x] > 96 && str[x] < 123)
			{
				str[x] -= 32;
				z = 0;
			}
			else if (str[x] > 64 && str[x] < 91)
				z = 0;
			else if (str[x] > 47 && str[x] < 58)
				z = 0;
		}
	}
	return (str);
}
