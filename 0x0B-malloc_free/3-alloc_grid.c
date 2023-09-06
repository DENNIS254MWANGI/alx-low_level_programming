#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **gd;
	int a, b;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	gd = malloc(height * sizeof(*gd));
	if (gd == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gd[a] = malloc(width * sizeof(**gd));
		if (gd[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gd[a]);
			free(gd);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			gd[a][b] = 0;
	}

	return (gd);
}
