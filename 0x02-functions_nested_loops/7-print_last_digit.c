#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: function that prints the last digit of a number.
 * @a: character to be checked
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{

	int last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
