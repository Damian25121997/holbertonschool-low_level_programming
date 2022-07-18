#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: is a pointer
* @index: is a value
* Return: 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;
	return (1);
}
