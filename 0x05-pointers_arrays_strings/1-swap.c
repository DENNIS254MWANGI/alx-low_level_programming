#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
