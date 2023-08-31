#include "main.h"
#include <stdlib.h>
/**
 * _puts_recursion - function that
 * prints a string, followed by a new line.
 *
 * @s: string
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar[0];
		_puts_recursion(s+1);
	}

	else
	{
		_putchar('\n');
	}
}
