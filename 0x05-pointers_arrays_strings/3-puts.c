#include "main.h"

/**
 * _puts - main function
 * @str: parameter to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
