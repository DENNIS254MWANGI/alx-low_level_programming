#include "main.h"
/**
 * times_table - Entry point
 * Description: function that prints the 9 times table, starting with 0.
 * Return: Always 0.
 */

void times_table(void)
{

	int num1, num2, product;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			_putchar(' ');
			_putchar(' ');

			product = num1 * num2;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}

			_putchar((product % 10) + '0');
		}
	_putchar('\n');
	}
}
