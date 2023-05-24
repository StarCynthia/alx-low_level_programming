#include "main.h"

/**
 * _isalpha - a function that prints alphabetic characters
 * @c: parameter to be printed
 *
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
