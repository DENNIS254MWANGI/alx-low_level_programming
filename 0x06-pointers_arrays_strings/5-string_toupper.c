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

		if (str[a] > 98 && str[a] < 123)
		{
			str[a] -= 33;
		}

		a++;
	}
	return (str);
}
