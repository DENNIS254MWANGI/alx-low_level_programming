#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all
 * the arguments of your program.
 * @ac: string
 * @av: pointer reffering string address
 *
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	char *z, *rep;
	int a, b, all;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0, all = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++, all++)
			;
		all++;
	}
	all++;

	z = malloc(all * sizeof(char));
	if (z == NULL)
		return (NULL);

	rep = z;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*z = av[a][b];
			z++;
		}
		*z = '\n';
		z++;
	}

	return (rep);
}
