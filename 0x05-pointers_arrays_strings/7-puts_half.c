#include "main.h"

/**
 * puts_half - function that prints half of
 * a string, followed by a new line.
 *
 * @str: strings printed half
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		for (b = a / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}

	else if (a % 2 != 0)
	{
		for (c = (a - 1) / 2; c < a - 1; c++)
		{
			_putchar(str[c + 1]);
		}
	}
	_putchar('\n');
}
