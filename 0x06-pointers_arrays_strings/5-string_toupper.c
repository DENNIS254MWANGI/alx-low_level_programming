#include "main.h"

/**
 * string_toupper - reverse the contents of an array of integers
 *@str: string
 *Return: return always successful
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{

		if (str[a] >= 'a' && str[a] <= 'a' 10)
		{
			str[a] = str[a] - 'a' + 'A';
		}

		a++;
	}
	return (str);
}
