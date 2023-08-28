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
	while (*s != c)
	{
		if (*s == c)
		{
			return (s);
		}
		s++
	}
	if (*s == c)
	{
		return (s);
	}

	return (null);
}
