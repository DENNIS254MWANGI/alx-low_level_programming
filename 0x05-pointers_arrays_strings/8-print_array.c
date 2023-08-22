#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: fist array
 * @n: second array
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z == 0)
			printf("%d", a[z]);
		else
			printf(", %d", a[z]);
	}
	printf("\n");
}
