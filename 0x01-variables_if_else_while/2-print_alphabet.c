#include <stdio.h>

/**
 * main : Entry point of all functions
 *
 * Description: print alphabets in lower cases an follow by a new line
 * 
 * * Return: Always 0 (succes)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
		putchar('\n');

		return (0);
}
