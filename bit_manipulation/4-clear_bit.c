#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: is a pointer
* @index: is a value
* Return: 1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int z;

	if (index > 64)
		return (-1);

	z = index;
	for (x = 1; z > 0; x *= 2, z--)
		;
	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
