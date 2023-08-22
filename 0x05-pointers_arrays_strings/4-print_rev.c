#include "main.h"

/**
 * print_rev - function that prints
 * a string, in reverse, followed by a new line.
 *
 * @s: string reverse
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int a, b, c;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a;

	for (b = c - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
