#include "main.h"

/**
 * _islower - a function that prints alphabets
 * @c: parameter to be printed
 *
 * Return: 1 and 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
