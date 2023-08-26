#include "main.h"

/**
 * cap_string - reverse the contents of an array of integers
 *@str: string
 *Return: return always successful
 */

char *cap_string(char *str)
{
	int a, b;
	int sts;
	char all_s[] = ",;.!?(){}\n\t\" ";

	for (a = 0, sts = 0; str[a] != '\0'; a++)
	{
		if (str[0] > 96 && str[0] < 123)
			sts = 1;
		for (b = 0; all_s[b] != '\0'; b++)
		{
			if (all_s[b] == str[a])
				sts = 1;

		}

		if (sts)
		{
			if (str[a] > 96 && str[a] < 123)
			{
				str[a] -= 32;
				sts = 0;
			}
			else if (str[a] > 64 && str[a] < 91)
				sts = 0;
			else if (str[a] > 47 && str[a] < 58)
				sts = 0;
		}
	}
	return (str);
}
