#include "main.h"
#include <stdio.h>

/**
 * id_sqrt - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @z: base number to check
 * Return: natural square root of number base
 */
int id_sqrt(int n, int z)
{
	if (n * n == z)
		return (n);
	if (n * n > z)
		return (-1);
	return (id_sqrt(n + 1, z));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (id_sqrt(1, n));
}
