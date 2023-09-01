#include "main.h"
#include <stdio.h>

/**
 * get_sqrt - function that returns the
 * natural square root of a number.
 * @a: number to power
 * @z: number to be powered
 * Return: Always 0.
 */

int get_sqrt(int a, int z)
int _sqrt_recursion(int n)
{
	if (a * a == z)
		return (n);
	if (n * n > z)
		return (-1);
	return (get_sqrt(n + 1, z));
}
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: constant
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (get_sqrt(1, n));
}
