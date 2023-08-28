#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer address
 * @c: constant
 * Return: return always successful
 *
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
			return (s);
	}
	if (*s == '\0')
	{
		return (s);
	}

	return (null);
}
