#include "main.h"

/**
 * _strlen - main function
 * @s: parameter to be printed
 * Return: Always 0
 */

int _strlen(char *s)
{
	int vet = 0;

	while (*s != '\0')
	{
		vet++;
		s++;
	}
	return (0);
}
