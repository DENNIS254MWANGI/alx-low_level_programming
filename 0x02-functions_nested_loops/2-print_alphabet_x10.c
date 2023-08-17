#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return - Always (success)
 */
void print_alphabet_x10(void)
{
	char ter;
	int i = 0;

	while (i < 9)

	{
		for (ter = 'a'; ter <= 'z'; ter++)
		{
			_putchar(ter);
		}
	_putchar('\n');
	i++;
	}
}
