#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@c: integer to be computed
 * Return: absolute value of an integer
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	else
	{
	return (c);
	}
}
