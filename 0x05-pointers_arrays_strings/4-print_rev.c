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
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

		for (a -= 1; a >= 0; a--)
		{
			_putchar(s[a]);
		}
	}

	_putchar('\n');
}
