#include "main.h"

/**
 * positive_or_negative - A function that prints positive and negative values
 * @i: Parameter to be printed
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative", i);
}
