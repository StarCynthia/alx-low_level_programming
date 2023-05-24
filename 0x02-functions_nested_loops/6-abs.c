#include "main.h"

/**
 * _abs - A function that prints absolute value
 * @x: parameter to be printed
 *
 * Return: x
 */

int _abs(int x)
{

	if (x < 0)
	{
		x = -(x);
	}
	else if (x > 0)
	{
		x = x;
	}
	return (x);
}
