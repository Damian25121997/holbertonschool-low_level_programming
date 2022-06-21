#include "main.h"

/**
* _strstr - locate a substring
* @haystack: string
* @needle: string substring
* Return: Pointer to the beginning of substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *aux1 = haystack;
		char *aux2 = needle;

		while (*aux2 == *haystack && *aux2 != '\0' && *haystack != '\0')
		{
			haystack++;
			aux2++;
		}
		if (*aux2 == '\0')
			return (aux1);
		haystack = aux1 + 1;
	}
	return ('\0');
}
