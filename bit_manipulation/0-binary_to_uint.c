#include "main.h"

/**
* binary_to_uint - converts a binary number
* @b: is a pointer
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int x = 0;

	if (b == NULL)
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
				return (0);
	x++;
	}
	x = 0;
	while (b[x] == '0' || b[x] == '1')
	{
		value <<= 1;
		value += b[x] - '0';
		x++;
	}
	return (value);
}
