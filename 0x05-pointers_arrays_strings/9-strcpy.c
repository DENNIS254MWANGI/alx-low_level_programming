#include "main.h"

/**
 * _strcpy -  function that copies the string pointed
 * to by src, including the terminating null byte (\0)
 * , to the buffer pointed to by dest.
 *
 * @dest: string pointer
 * @src: string pointer
 *
 * Return: Always 0 (Success)
 */


char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
