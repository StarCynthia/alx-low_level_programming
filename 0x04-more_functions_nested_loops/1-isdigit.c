#include "main.h"

/**
 * _isdigit - prints digit
 * @c: parameter to be printed
 * Return: 1 and 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
