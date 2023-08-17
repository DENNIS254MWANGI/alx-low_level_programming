#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 * using the _putchar function.
 *
 * Return: Always 0 (Success)
 *
 * @c: The character to be written
 *
 */
int _putchar(char c);

int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
