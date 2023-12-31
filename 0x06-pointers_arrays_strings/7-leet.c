#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: string
 * Return: return always successful
 *
 */

char *leet(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] == 'a' || str[a] == 'A')
			str[a] = '4';
		else if (str[a] == 'e' || str[a] == 'E')
			str[a] = '3';
		else if (str[a] == 'o' || str[a] == 'O')
			str[a] = '0';
		else if (str[a] == 't' || str[a] == 'T')
			str[a] = '7';
		else if (str[a] == 'l' || str[a] == 'L')
			str[a] = '1';
	}

	return (str);
}
