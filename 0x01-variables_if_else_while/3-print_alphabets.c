#include <stdio.h>

/**
 * main : Entry point of all functions
 *
 * Description: print alphabets in lower cases usis char
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	
		putchar('\n');
	return (0);
}
