#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to last string
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, z, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b] != '\0'; b++)
		;
	for (z = 0; s2[z] != '\0'; z++)
		;

	a = malloc((b * sizeof(*s1)) + (z * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (b + z + 1); i++)
	{
		if (i < b)
			a[i] = s1[i];
		else
			a[i] = s2[j++];
	}

	return (a);
}
