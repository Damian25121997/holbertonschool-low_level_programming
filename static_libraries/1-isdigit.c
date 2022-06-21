#include "main.h"

/**
 * _isdigit - check for a digit ( 0 throug 9)
 * @c: character
 * Return: Always
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
