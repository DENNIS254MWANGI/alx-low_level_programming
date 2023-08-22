#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string reversed
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int a, b, c;
	char messg;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		messg = s[a];
		s[a] = s[c];
		s[c--] = messg;
	}
}
