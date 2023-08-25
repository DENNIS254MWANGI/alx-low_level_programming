#include "main.h"
/**
 * reverse_array - function that reverses the
 * content of an array of integers.
 * @a:appends destination string
 * @n: appends source string
 *
 * Return: pointer to the resulting string dest
 */

void reverse_array(int *a, int n)
{
	int b, c;

	b = 0;

	while (b < n / 2)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
	b++;
}
