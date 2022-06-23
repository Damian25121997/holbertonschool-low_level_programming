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
	int x = 0;
	char *pointer;
	int f1, f2;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	f1 = strlen(s1);
	f2 = strlen(s2);
	pointer = (char *) malloc(sizeof(char) * ((f1 + f2) + 1));

	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < f1; x++)
	{
		pointer[x] = s1[x];
	}
	for (x = 0; x < f2; x++)
	{
		pointer[x + f1] = s2[x]; 
	}
	
	return (pointer);
}
