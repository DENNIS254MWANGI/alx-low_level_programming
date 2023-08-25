#include "main.h"
/**
 * *_strcat - function that concatenates two strings
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
		dest[a + b] = src[b];
		b++;
		n--;
	}
	dest[b + a] = '\0';

	return (dest);
}
