#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet in lowercase followed by a new line
 * Return - Always (success)
 */
void print_alphabet(void)
{
	char ter;

	for (ter = 'a'; ter <= 'z'; ter++)
	{
		_putchar(ter);
	}

	return (0);
}
