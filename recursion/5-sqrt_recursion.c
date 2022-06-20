#include "main.h"

/**
* h_sqrt_rec - check the code
* @x: is a variable
* @z: is a variable
* Return: Always
*/

int h_sqrt_rec(int x, int z)
{
	if (x * x == z)
	{
		return (x);
	}
	if (x * x > z)
	{
		return (-1);
	}
	else
		return (h_sqrt_rec(x + 1, z));
}

/**
* _sqrt_recursion - return the natural square root of a number
* @n: is a variable
* Return: Always
*/

int _sqrt_recursion(int n)
{
	int y = 1;

	return (h_sqrt_rec(y, n));
}
