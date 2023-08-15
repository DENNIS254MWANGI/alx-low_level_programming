#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all single digit numbers of
 * base 9 starting with zero and add , to each
 * Return: Always (Success)
 */

int main(void)
{
int c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
