#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest:appends destination string
 * @src: appends source string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		a++;
		dest[a] = src[a];
	}
	while (n > a)
	{
		dest[a] = '\0';
		n++;
	}

	return (dest);
}
