#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0;
	char *pointer;
	unsigned int f1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	f1 = strlen(s1);



	pointer = (char *) malloc(sizeof(char) * ((f1 + n) + 1));

	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < f1; x++)
		pointer [x] = s1[x];
	for (x = 0; x <= n; x++)
		pointer [x + f1] = s2[x];

	return (pointer);
}
