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
		if (str[0] >= 'a' && str[0] <= 'z')
			z = 1;
		for (y = 0; a[y] != '\0'; y++)
		{
			if (a[y] == str[x])
				z = 1;
		}
		if (z)
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
				str[x] -= 32; /*HAGO LA LETRA EN MAYUSCULA*/
				z = 0;
			}
			else if (str[x] >= 'A' && str[x] < 'Z')
				z = 0;
			else if (str[x] > '0' && str[x] < '9')
				z = 0;
		}
	}
	return (str);
}
