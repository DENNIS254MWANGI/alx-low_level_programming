#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: pointer destination
 * @src: pointer source
 * @n: constant
 * Return: return always successful
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		dest[z] = src[z];
		z++;
	}
	return (dest);
}
