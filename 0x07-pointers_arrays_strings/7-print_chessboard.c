#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 * @a: constant
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;
	c = 0;

	while (b < 8)
	{
		while (c < 8)
		{
			if (c == 7)
			{
				_putchar(a[b][c]);
				_putchar('\n');
			}
			else
				_putchar(a[b][c]);
			c++;
		}
		b++;
	}
}
