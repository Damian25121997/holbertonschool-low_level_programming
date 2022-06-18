#include "main.h"

/**
* _strstr - locate a substring
* @haystack: string
* @needle: string substring
* Return: Pointer to the beginning of substring, or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int x = 0, z = 0;

	while (haystack[x])
	{
		while (needle[z])
		{
			if (haystack[x + z] != needle[z])
			{
				break;
			}

			z++;

		if (needle[z] == '\0')
		{
			return (haystack + x);
		}
		x++;
		}
	}
	return (0);
}
