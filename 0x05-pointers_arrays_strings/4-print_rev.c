#include "main.h"

/**
 * print_rev - main function
 * @s: function parameter
 */

void print_rev(char *s)
{
	int vet = 0;
	int o;

	while (*s != '\0')
	{
		vet++;
		s++;
	}
		s--;
	for (o = vet; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

