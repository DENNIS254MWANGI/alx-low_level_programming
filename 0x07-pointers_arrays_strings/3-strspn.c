#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer destination
 * @accept: pointer source
 * Return: return always successful
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	a = 0;
	b = 0;
	int c = 0;

	while (s[a] != '\0')
	{
		if (s[a] != 32)
		{
			while (accept[b] != '\0')
			{
				if (s[a] == accept[b])
					c++;
				b++;
			}
		a++;
		}
		else
			return (c);

	}
	return (c);
}
