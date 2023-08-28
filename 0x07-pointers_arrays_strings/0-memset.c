#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory address
 * @b:number of bytes
 * @n: constant
 * Return: return always successful
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		s[z] = b;
		z++;
	}
	return (s);
}
