#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest:appends destination string
 * @src: appends source string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && n > 0)
	{
		dest[a] = src[b];
		b++;
		n--;
		a++;
	}
	dest[b + a] = '\0';

	return (dest);
}
