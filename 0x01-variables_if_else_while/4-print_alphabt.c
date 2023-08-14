#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all alphabet in lowercase
 * except q and e
 *
 * Return: Always (Success)
 */

int main(void)
{char c;

for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
}

putchar('\n');

return (0);
}
