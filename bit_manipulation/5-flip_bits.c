#include "main.h"

/**
* flip_bits - return the number of bits you would need
* @n: is a value
* @m: is a value
* Return: the numbers of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int x;

	diff = n ^ m;
	x = 0;

	while (diff)
	{
		x++;
		diff &= (diff - 1);
	}
	return (x);
}
