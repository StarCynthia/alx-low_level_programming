#include "main.h"

/**
 * _isupper - checks for upper cases
 * @c: Parameter to be printed
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
