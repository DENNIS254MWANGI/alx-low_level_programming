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
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		*dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	dest_end++;

	return (dest);
}



