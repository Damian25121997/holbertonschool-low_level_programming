#include "main.h"

/**
 * lett - encode a string intro 1337
 * @p: string
 * Return: s
 */

char *leet(char *p)
{
	int x;

	for (x = 0; p[x] != '\0'; x++)
	{
		while (p[x] == 'a' || p[x] == 'A')
			p[x] = '4';
		while (p[x] == 'e' || p[x] == 'E')
			p[x] = '3';
		while (p[x] == 'o' || p[x] == 'O')
			p[x] = '0';
		while (p[x] == 't' || p[x] == 'T')
			p[x] = '7';
		while (p[x] == 'l' || p[x] == 'L')
			p[x] = '1';
	}
	return (p);
}
