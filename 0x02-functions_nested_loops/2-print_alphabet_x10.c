#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabets in lower case x10
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char c = 0, d;

	while (c < 10)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}

		_putchar('\n');
		c++;
	}

}
