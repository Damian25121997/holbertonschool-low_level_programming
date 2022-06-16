#include "main.h"

/**
 * lett - encode a string intro 1337
 * @p: string
 * Return: s
 */

char *leet(char *p)
{
	int x, z;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; p[x] != '\0'; x++)
	{
		for (z = 0; z < 10; z++)
		{
			if (p[x] == a[z])
			{
				p[x] = b[z];
			}
		}
	}
	return (p);
}
