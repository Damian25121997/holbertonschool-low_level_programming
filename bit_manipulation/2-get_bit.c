#include "main.h"

/**
* get_bit - return the value of a bit at a given index
* @n: is a value
* @index: is a value
* Return: the vaulo of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
		return (-1);

	temp = n >> index;

	return (temp & 1);
}
