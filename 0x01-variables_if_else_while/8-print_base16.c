#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all single digit numbers of
 * base 16 starting from 0
 * Return: Always (Success)
 */

int main(void)
{
char c;

for (c = '0'; c <= '15'; c++)
{
{
putchar(c);
}
}

putchar('\n');

return (0);
