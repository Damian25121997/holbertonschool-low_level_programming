#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
* @s1: pointer
* @s2: pointer
* Return: concat s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	int f1, f2, x = 0;
	char *pointer;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (f1 = 0; f1 <= *s1; f1++)
		{
		}
	for (f2 = 0; f2 <= *s2; f2++)
		{
		}
	pointer = (char *) malloc(sizeof(char) * (f1 + f2 + 1));

	if (pointer == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	while (*s1)
	{
		pointer[x] = *s1;
		x++;
		s1++;
	}
	while (*s2)
	{
		pointer[x] = *s2;
		x++;
		s2++;
	}
	return (pointer);
}
