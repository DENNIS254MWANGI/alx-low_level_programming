#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all single digit numbers of
 * base 9 starting from 0 and A to F
 * Return: Always (Success)
 */

int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}

putchar('\n');

return (0);
}
