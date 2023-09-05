#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: string size
 * @c: string
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int b;

	if (size == 0)
		return (NULL);

	z = malloc(size * sizeof(*z));

	if (z == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		z[b] = c;

	return (z);
}
