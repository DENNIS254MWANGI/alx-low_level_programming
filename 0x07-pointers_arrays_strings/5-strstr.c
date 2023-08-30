#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 *@haystack: pointer string
 *@needle: pointer substring
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	a = 0;
	b = 0;

	while (needle[b] != '\0')
		s++;

	while (*haystack)
	{
		while (needle[a])
		{
			if (haystack[a] != needle[a])
				break;
			a++;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
