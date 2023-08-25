#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest:appends destination string
 * @src: appends source string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest = src;
		b++;
		a++;
	}
	*dest = '\0';

	return (dest);
}
