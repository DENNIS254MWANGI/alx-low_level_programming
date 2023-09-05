#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: pointer to a string copy
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *z;
	int a, b;

	a = 0;
	b = 0;

	if (str == NULL)
		return (NULL);

	while (str[a] != '\0')
		a++;

	z = malloc(a * sizeof(*z) + 1);
	if (z == NULL)
		return (NULL);

	while (b < a)
	{
		z[b] = str[b];
		b++;
	}
	z[b] = '\0';

	return (z);
}
